//2102064
package labproblem5;

import java.util.Scanner;

public class Q17 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();

        int sum = calculateDigitSum(number);

        System.out.println("Sum of digits: " + sum);
        System.out.println("In English: " + numberToEnglish(sum));

        scanner.close();
    }

    private static int calculateDigitSum(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    private static String numberToEnglish(int num) {
        String[] words = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

        if (num < 0 || num > 9) {
            return "Invalid input";
        }

        return words[num];
    }
}
