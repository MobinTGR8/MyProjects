//2102064
package lab_problem_4;

import java.util.Scanner;

public class Q15 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Input the first number : ");
        int a = in.nextInt();
        System.out.print("Input the second number: ");
        int b = in.nextInt();
        int divided = a / b;
        int result = a - (divided * b);
        System.out.println(result);
    }
}
