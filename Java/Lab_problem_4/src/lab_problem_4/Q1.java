//2102064 - Convert a string to an integer
package lab_problem_4;

import java.util.Scanner;

public class Q1 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number(String): ");
        String str = in.nextLine();
        int result = Integer.parseInt(str);
        System.out.println("The Integer value is " + result);
    }
}
