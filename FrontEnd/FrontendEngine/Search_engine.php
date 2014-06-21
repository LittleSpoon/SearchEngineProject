 
                      
	
					
					<form  action="results.php" method="post">
				        <input id="search" type="text" name="keywords" value="<?php if (isset($_POST['search'])) echo htmlentities(trim($_POST['search'])); ?>"> 
					<input id="bottom" type="submit" name="search" value="Search"> 
					</form>	 
					   