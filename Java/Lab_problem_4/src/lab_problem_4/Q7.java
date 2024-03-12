//2102064 - Accepts an integer and count the factors of the number
package lab_problem_4;

import java.util.Scanner;

public class Q7 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = in.nextInt();

        int factorCount = 0; 

        for (int i = 1; i <= number; i++) {
            if (number % i == 0) {
                factorCount++;
            }
        }

        System.out.println("The number of factors of " + number + " is: " + factorCount);
    }
}
