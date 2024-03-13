package labproblemset06;

import java.util.Scanner;

public class Q8 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = in.nextInt();
        int result = sumDigitsUntilSingleDigit(number);
        System.out.println("The single-digit sum is: " + result);
    }

    public static int sumDigitsUntilSingleDigit(int num) {
        if (num < 10) {
            return num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sumDigitsUntilSingleDigit(sum);
    }
}
