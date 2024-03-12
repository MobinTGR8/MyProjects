package labproblem09method;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Q15 {

    public static void displayCurrentDateTime() {
        LocalDateTime currentDateTime = LocalDateTime.now();
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        String formattedDateTime = currentDateTime.format(formatter);
        System.out.println("Current Date and Time: " + formattedDateTime);
    }

    public static void main(String[] args) {
        displayCurrentDateTime();
    }
}
