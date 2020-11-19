<style>
#Logo{
position:relative;
left:-20;
top:400;
font-size:50;
color:#FFF;
}

body{
background-repeat:no-repeat;
background-size:100%;
width:100%;
height:100%;
overflow: hidden;
}
</style>


<script type="text/javascript">
  $("#password_passed").hide();
  function goto_site_menu(){
    document.getElementById("password_passed").click();
  }
</script>

<html>
  <head>
    <script type="text/javascript" src="jquery.js"></script>
    <link rel="shortcut icon" type="image/x-icon" href="/Icon.png">
    <meta http-equiv="refresh" content="90">
    <meta name="viewport:" content="width=device-width, initial-scale=1">
  </head>
  <body style='background-image:url("/blue_blackhole.png")'>
    <form method="POST" id="password_form">
      <i style="color:#AAA">Password </i><input style="height:30" type="password" id="password" name="password"required/><br>
      <i style="color:#AAA">  Submit  </i><input value="Submit" style="position:relative;left:18;width:165;height:50" id="submit_but" name="submit_but" type="submit"/>
      <a style="color:#AAA" href="/Home_page.html" id="password_passed"></a>
      <i id="Logo" style="color:#FFFFFF">Survive_Tues.com</i>
    </form>
  </body>
</html>

<?php
$password = 54554553;

if(isset($_POST["submit_but"])){
  if($_POST["password"] == $password){
    //CALLING CLICK FUNCTION FOR 'A' TAG//
    echo '<script type="text/javascript">','goto_site_menu();','</script>';
    //CALLING CLICK FUNCTION FOR 'A' TAG//
  }else{
    echo "<i style='color:#FF0000'>Incorrect password!</i>";
  }
}
?>