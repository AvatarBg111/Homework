<html>
<head>
  <meta http-equiv="refresh" content="10">
  <meta name="viewport:" content="width=device-width, initial-scale=1.0">
</head>
  <body>
  </body>
</html>

<?php 
$fileList = glob('bel/*');

foreach($fileList as $filename){
  if($filename == undefined){
    echo '<i style="color:#000">No Files</i>';
    break;
  }
  $file_name = explode("/" ,$filename);
//  echo $file_name[1];
  
  $html='
  <html>
    <body>
        <a download style="box-shadow:0 4px 8px 0 rgba(0, 0, 0, 0.2); text-decoration:none; color:rgba(255, 255, 255, 1); background-color:rgba(0, 150, 250, 0.6)" id="one" href='.$filename.'>'.$file_name[1].'</a>
    </body>
  </html>';
  
  libxml_use_internal_errors(true);
  $doc = new DOMDocument();
  $doc->loadHTML($html);
    //get the element which will be appended
  $descBox = $doc->getElementById('one');
    //create the element which will be appended
  $appended = $doc->createElement('a');
    //append element and save changes
  $descBox->appendChild($appended);
  echo $doc->saveHTML();
  echo "<br>";
}
?>

<style>
body{
background-repeat:no-repeat;
background-size:100%;
}    
</style>


