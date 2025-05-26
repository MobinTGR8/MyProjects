<?php include 'db.php'; ?>

<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST' && isset($_POST['login'])) {
    $username = $_POST['username'];
    $password = $_POST['password'];
    $sql = "SELECT * FROM users WHERE username='$username'";
    $result = $conn->query($sql);
    if ($result->num_rows > 0) {
        $row = $result->fetch_assoc();
        if (password_verify($password, $row['password'])) {
            $_SESSION['user'] = $username;
            header("Location: dashboard.php");
        } else {
            echo "<p class='text-danger'>Invalid password</p>";
        }
    } else {
        echo "<p class='text-danger'>User not found</p>";
    }
}
?>

<!DOCTYPE html>
<html>

<head>
    <title>Login</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css">
</head>

<body class="container mt-5">
    <h2>Login</h2>
    <form method="post"
        style="width: 300px; margin: 50px auto; padding: 20px; border: 1px solid #ccc; text-align: center;">
        <h2>Login</h2>
        <input type="text" name="username" required placeholder="Username"
            style="width: 100%; padding: 10px; margin: 5px 0;">
        <input type="password" name="password" required placeholder="Password"
            style="width: 100%; padding: 10px; margin: 5px 0;">
        <button type="submit" name="login"
            style="width: 100%; padding: 10px; background: green; color: white;">Login</button>
    </form>
</body>

</html>