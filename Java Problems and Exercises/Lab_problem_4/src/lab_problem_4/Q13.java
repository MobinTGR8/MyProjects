//2102064
package lab_problem_4;

import java.util.Scanner;

public class Q13 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the first integer: ");
        int num1 = in.nextInt();

        System.out.print("Enter the second integer: ");
        int num2 = in.nextInt();

        if (num1 == num2) {
            System.out.println("Both values are the same, returning 0.");
            System.out.println("Result: 0");
        } else if (num1 % 6 == num2 % 6) {
            int result = Math.min(num1, num2);
            System.out.println("Both values have the same remainder when divided by 6.");
            System.out.println("Result: " + result);
        } else {
            int result = Math.max(num1, num2);
            System.out.println("The largest value is: " + result);
        }

    }
}
