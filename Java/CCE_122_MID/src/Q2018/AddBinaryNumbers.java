
package Q2018;
import java.util.Scanner;


public class AddBinaryNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Input first binary number: ");
        String binary1 = scanner.next();
        
        System.out.print("Input second binary number: ");
        String binary2 = scanner.next();

        // Convert binary strings to decimal integers, add them, and convert the result back to binary
        int decimal1 = Integer.parseInt(binary1, 2);
        int decimal2 = Integer.parseInt(binary2, 2);
        int sum = decimal1 + decimal2;

        String binarySum = Integer.toBinaryString(sum);

        System.out.println("Sum of two binary numbers: " + binarySum);
    }
}
