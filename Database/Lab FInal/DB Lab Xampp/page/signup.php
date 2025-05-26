<?php include 'db.php'; ?>

<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST' && isset($_POST['signup'])) {
    $username = $_POST['username'];
    $password = password_hash($_POST['password'], PASSWORD_BCRYPT);
    $sql = "INSERT INTO users (username, password) VALUES ('$username', '$password')";
    if ($conn->query($sql) === TRUE) {
        header("Location: login.php");
    } else {
        echo "Error: " . $conn->error;
    }
}
?>

<!DOCTYPE html>
<html>

<head>
    <title>Signup</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css">
</head>

<body class="container mt-5">
    <h2>Signup</h2>
    <form method="post"
        style="width: 300px; margin: 50px auto; padding: 20px; border: 1px solid #ccc; text-align: center;">
        <h2>Signup</h2>
        <input type="text" name="username" required placeholder="Username"
            style="width: 100%; padding: 10px; margin: 5px 0;">
        <input type="password" name="password" required placeholder="Password"
            style="width: 100%; padding: 10px; margin: 5px 0;">
        <button type="submit" name="signup"
            style="width: 100%; padding: 10px; background: blue; color: white;">Signup</button>
    </form>
</body>

</html>