//Breaks an integer into a sequence of individual digits
package labproblemset07;

import java.util.Scanner;

public class Q10 {

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter an integer: ");
            int number = scanner.nextInt();

            String numberString = Integer.toString(number);

            System.out.println("Digits of the integer:");

            for (int i = 0; i < numberString.length(); i++) 
            {
                char digit = numberString.charAt(i);
                System.out.print(digit + " ");
            }
        }
    }
}
