//2102064
package lab.problem.pkg02;

import java.util.Scanner;

public class LabProblem02_Q15 {
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int a, b, temp;
        System.out.println("Enter two numbers: ");
    a = in.nextInt();
    b = in.nextInt();
    
    System.out.println("Before swapping : a, b = " + a + ", " + + b);
    temp = a;
    a = b;
    b = temp;   
    System.out.println("After swapping : a, b = " + a + ", " + + b);
 }
}
