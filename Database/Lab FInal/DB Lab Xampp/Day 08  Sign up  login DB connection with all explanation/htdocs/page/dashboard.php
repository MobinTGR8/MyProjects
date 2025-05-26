<?php include 'db.php'; ?>
<?php if (!isset($_SESSION['user'])) header("Location: login.php"); ?>

<!DOCTYPE html>
<html>

<head>
    <title>Dashboard</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css">
</head>

<body
    style="display: flex; justify-content: center; align-items: center; height: 100vh; flex-direction: column; text-align: center;">
    <h2>Welcome, <?php echo $_SESSION['user']; ?>!</h2><br>
    <a href="logout.php" style="padding: 10px 20px; background: red; color: white; text-decoration: none;">
        Logout</a>
</body>

</html>