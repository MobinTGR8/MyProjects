//2102064 - true if two or more of them have the same rightmost digit
package lab_problem_4;

import java.util.Scanner;

public class Q4 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Input the first number : ");
        int a = in.nextInt();
        System.out.print("Input the second number: ");
        int b = in.nextInt();
        System.out.print("Input the third number : ");
        int c = in.nextInt();

        boolean t = true;

        if ((a % 10 == b % 10) || (a % 10 == c % 10) || (b % 10 == 10 % c))
        {
            System.out.println(t);
        }
    }
}
