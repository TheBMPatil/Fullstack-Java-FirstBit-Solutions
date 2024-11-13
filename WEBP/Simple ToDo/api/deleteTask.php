
<?php
include 'db.php';

$id = $_POST['id'];

$sql = "DELETE FROM tasks WHERE id = $id";
$conn->query($sql);

echo json_encode(["status" => "success"]);
?>
