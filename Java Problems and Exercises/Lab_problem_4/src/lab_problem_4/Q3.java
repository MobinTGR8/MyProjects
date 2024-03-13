//2102064 - true if the second number is greater than first number and third number is greater than second number
package lab_problem_4;

import java.util.Scanner;

public class Q3 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Input the first number : ");
        int a = in.nextInt();
        System.out.print("Input the second number: ");
        int b = in.nextInt();
        System.out.print("Input the third number : ");
        int c = in.nextInt();

        boolean t = true;

        if (b > a && c > b) {
            System.out.println(t);
        }
    }
}
