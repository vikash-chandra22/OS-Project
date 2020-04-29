
 <?php
//$a=$_POST['id'];
$conn = mysqli_connect("localhost", "root","", "mydb");
// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}


$sql = "SELECT id, firstname, lastname FROM employee ORDER BY firstname DESC";
$result = mysqli_query($conn, $sql);
if (mysqli_num_rows($result) > 0) {
 while($row = mysqli_fetch_assoc($result)) {
 // if($row["id"]==$a){
  echo "id: " . $row["id"]. " - Name: " . $row["firstname"]. " " . $row["lastname"]. "<br>";
   // }
}
} else {
    echo "0 results";
}
mysqli_close($conn);
?> 