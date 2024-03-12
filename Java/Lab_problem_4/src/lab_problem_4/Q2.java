//2102064 - calculate the sum of two integers and return true if the sum is equal to a third integer
package lab_problem_4;

import java.util.Scanner;

public class Q2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Input the first number : ");
        int a = in.nextInt();
        System.out.print("Input the second number: ");
        int b = in.nextInt();
        System.out.print("Input the third number : ");
        int c = in.nextInt();

        boolean t = true;

        if ((a + b) == c || (b + c) == a || (c + a) == b) {
            System.out.println(t);
        }
    }
}
