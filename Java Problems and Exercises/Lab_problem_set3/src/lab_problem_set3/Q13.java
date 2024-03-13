//2102064 - Accepts an integer (n) and computes the value of n+nn+nnn
package lab_problem_set3;

import java.util.Scanner;

public class Q13 {

    public static void main(String[] args) {

        int n;
        char s1, s2, s3;
        Scanner in = new Scanner(System.in);
        System.out.print("Input number: ");
        n = in.nextInt();
        System.out.println( n + " + " + n+n + " + " + n+n+n);
    }
}
