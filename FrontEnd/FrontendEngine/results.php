 <?php
 session_start();
 $_SESSION['search']=$_POST['search'];
 ?>

 <form  action="results.php" method="post">
        <input id="search" type="text" name="keywords" value="<?php if (isset($_POST['search'])) echo htmlentities(trim($_POST['search'])); ?>"> 
	<input id="bottom" type="submit" name="search" value="Search"> 
	</form>	 

	<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="fr" >


<head>                  			      
<title> <?php echo $_SESSION['search']; ?> </title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<meta charset=utf-8" />
	<link rel="stylesheet" href="./css/results.css" />
</head>
		

 <body>
		
		<?php include("menubar.php"); ?>
		<div id="corps" >
		</div>
		<?php include("footer.php"); ?>
</body>
		

</html>