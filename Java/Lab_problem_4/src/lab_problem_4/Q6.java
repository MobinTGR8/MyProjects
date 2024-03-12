//2102064 - Find the number of values in a given range divisible by a given value
package lab_problem_4;

import java.util.Scanner;

public class Q6 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        System.out.print("Enter the start of the range: ");
        int start = in.nextInt();

        System.out.print("Enter the end of the range: ");
        int end = in.nextInt();

        System.out.print("Enter the value to check for divisibility: ");
        int divisor = in.nextInt();

        int count = 0; 

        for (int i = start; i <= end; i++) {
            if (i % divisor == 0) {
                count++;
            }
        }
        
        System.out.println("The number of values in the range divisible by " + divisor + " is: " + count);
    }
}
