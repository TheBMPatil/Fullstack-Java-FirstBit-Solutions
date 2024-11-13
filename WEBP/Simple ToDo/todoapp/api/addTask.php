
<?php
include 'db.php';

$description = $_POST['description'];

$sql = "INSERT INTO tasks (description) VALUES ('$description')";
$conn->query($sql);

echo json_encode(["id" => $conn->insert_id, "description" => $description, "completed" => false]);
?>
