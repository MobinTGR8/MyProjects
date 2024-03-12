//2102064 - compare two numbers.
package lab_problem_set3;

import java.util.Scanner;

public class Q1 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter first number:");
        int n1 = in.nextInt();
        System.out.print("Enter second number");
        int n2 = in.nextInt();

        if (n1 == n2) {
            System.out.print(n1 + " = " + n2 + "\n");
        }
        if (n1 != n2) {
            System.out.print(n1 + " != " + n2 + "\n");
        }
        if (n1 < n2) {
            System.out.print(n1 + " < " + n2 + "\n");
        }
        if (n1 > n2) {
            System.out.print(n1 + " > " + n2 + "\n");
        }
        if (n1 <= n2) {
            System.out.print(n1 + " <= " + n2 + "\n");
        }
        if (n1 >= n2) {
            System.out.print(n1 + " >= " + n2 + "\n");
        }

    }
}
