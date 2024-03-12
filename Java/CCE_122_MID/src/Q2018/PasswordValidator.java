
package Q2018;

import java.util.Scanner;

public class PasswordValidator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Input a password: ");
        String password = scanner.nextLine();

        if (isValidPassword(password)) {
            System.out.println("Password is valid: " + password);
        } else {
            System.out.println("Invalid password. Please follow the password rules.");
        }
    }

    private static boolean isValidPassword(String password) {
        return password.length() >= 10 && password.matches("^[a-zA-Z0-9]+$") && countDigits(password) >= 2;
    }

    private static int countDigits(String s) {
        int count = 0;
        for (char c : s.toCharArray()) {
            if (Character.isDigit(c)) {
                count++;
            }
        }
        return count;
    }
}
