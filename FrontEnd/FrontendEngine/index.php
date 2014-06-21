
 
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="fr" >


<head>                  			      
<title> wwww.Spoons.com </title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<meta charset=utf-8" />
	<link rel="stylesheet" href="./css/engine.css" />
</head>
		
   <body>
   
    <h1> SpO_ons </h1>
      
		
	<form  action="results.php" method="post">
        <input id="search" type="text" name="keywords" value="<?php if (isset($_POST['search'])) echo htmlentities(trim($_POST['search'])); ?>"> 
	<input id="bottom" type="submit" name="search" value="Search"> 
	</form>	 
        		   
	   <p id=copyright > Copyright Little Spoons official </p>
      
		
   </body>	
       
		

</html>