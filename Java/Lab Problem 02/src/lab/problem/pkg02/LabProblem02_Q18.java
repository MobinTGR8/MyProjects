//2102064
package lab.problem.pkg02;

import java.util.Scanner;

public class LabProblem02_Q18 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first binary number: ");
        String binary1 = scanner.nextLine();

        System.out.print("Enter the second binary number: ");
        String binary2 = scanner.nextLine();

        String product = multiplyBinary(binary1, binary2);

        System.out.println("Product of binary numbers: " + product);

        scanner.close();
    }

    public static String multiplyBinary(String binary1, String binary2) {
        int num1 = Integer.parseInt(binary1, 2);
        int num2 = Integer.parseInt(binary2, 2);
        int product = num1 * num2;
        return Integer.toBinaryString(product);
    }
}
