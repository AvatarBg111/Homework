<html>
    <head>
        <title>bel</title>
        <script type="text/javascript" src="jquery.js"></script>
        <meta http-equiv="refresh" content="300">
        <meta name="viewport:" content="width=device-width, initial-scale=1.0">
        <link rel="stylesheet" type="text/css" href="bel.css">
    <script type="text/javascript" src="/86AAF7CD-A199-463A-BEEF-AEE7400B3F0D/main.js?attr=8xPSB-BoFC-TB6oVtNvHizha63Xo-TRMRWzbMdboynhjAggdAeyKg2XziPlEqiVBrnFXBmMdh_iiEcnsyjH_Bc0K4ysJbbjUEvMM_O9S7kID9RGRquT6KRpW5FcmFZV7E1y-iqaCNMXGpxDOihqOTw" charset="UTF-8"></script></head>
    <body>
        <div class="card">
            <div class="imgbox">
                <img src="bel.png" alt="neshto">
            </div>
            <div class="details">
                <form id="file-form" method="POST" enctype="multipart/form-data">
                    <input class="input001" type="file" name="file" required><br>
                    <button style="width:110; height:25" class="input001" name="submit" type="submit">Upload</button>
                    <b style="color:#000">FILE NAMES MUSTN'T HAVE SPACE CHARACTERS</b>
                </form>
                <iframe id="card001" style="height:313" src="bel_1.php"></iframe>
            </div>
        </div>
    </body>
</html>

<?php
  if(isset($_POST['submit'])){
    $file_name =     $_FILES['file']['name']; 
    $file_tmp_name = $_FILES['file']['tmp_name']; 
    $file_error =    $_FILES['file']['error']; 
    $file_size =     $_FILES['file']['size']; 
    $file_type =     $_FILES['file']['type'];

    $file_ext = explode('.', $file_name); 
    $file_act_ext = strtolower(end($file_ext));
    
    $allowed_extensions = array("jpg","png","docx","xlsx","txt");
    if(in_array($file_act_ext, $allowed_extensions)){
      if($file_error === 0){
        if($filesize < 20 * 1024 * 1024){
          $file_new_name = $file_ext[0].".".$file_act_ext;
          $file_new_destination = 'bel/'.$file_new_name;
          
          if(move_uploaded_file($file_tmp_name, $file_new_destination)){
            echo "The file was successfuly uploaded!<br>";
          }else{
            echo "The file was unsuccessfuly uploaded! Retry uploading!<br>";
          }
          
        }else{
          echo "Unsuccessfuly uploaded file! Unsupported file size!<br>";
        }
      }else{
        echo "Err! Try again!";
      }
    }else{
      echo "Unsuccessfuly uploaded file! Unsupported file type!<br>";
    }
  }
?>