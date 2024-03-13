//2102064
package lab_problem_4;

import java.util.Scanner;

public class Q14 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the first integer (between 25 and 75): ");
        int num1 = in.nextInt();

        System.out.print("Enter the second integer (between 25 and 75): ");
        int num2 = in.nextInt();

        boolean isValidRange = (num1 >= 25 && num1 <= 75) && (num2 >= 25 && num2 <= 75);

        if (isValidRange) {
            boolean hasCommonDigit = false;

            while (num1 > 0) {
                int digit = num1 % 10;
                num1 /= 10;

                int tempNum2 = num2;
                while (tempNum2 > 0) {
                    if (tempNum2 % 10 == digit) {
                        hasCommonDigit = true;
                        break;
                    }
                    tempNum2 /= 10;
                }

                if (hasCommonDigit) {
                    break;
                }
            }

            System.out.println(hasCommonDigit);
        } else {
            System.out.println("Invalid input.");
        }

    }
}
