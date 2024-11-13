
<?php
include 'db.php';

$id = $_POST['id'];
$completed = $_POST['completed'];

$sql = "UPDATE tasks SET completed = $completed WHERE id = $id";
$conn->query($sql);

echo json_encode(["status" => "success"]);
?>
