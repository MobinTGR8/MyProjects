//2102064 - Accept a number and check the number is even or not
package lab_problem_set3;

import java.util.Scanner;

public class Q18 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Input a number: ");
        int n = in.nextInt();
        if (n % 2 == 0) {
            System.out.println(1);
        } else {
            System.out.println(0);
        }
    }
}
