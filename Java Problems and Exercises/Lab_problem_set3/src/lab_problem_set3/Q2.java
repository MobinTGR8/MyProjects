//2102064 - compute the sum of an integer's digits.
package lab_problem_set3;

import java.util.Scanner;

public class Q2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Input an integer: ");
        long n = in.nextLong();
        System.out.println("The sum of the digits is: " + sumDigits(n));
    }

    private static int sumDigits(long n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
}
