//2102064
package lab.problem.pkg02;

import java.util.Scanner;

public class LabProblem02_Q20 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter an integer number: ");
        int decimalNumber = scanner.nextInt();

        String hexadecimalNumber = Integer.toHexString(decimalNumber).toUpperCase();

        System.out.println("Hexadecimal representation: " + hexadecimalNumber);

        scanner.close();
    }
}
