//2102064
package lab.problem.pkg02;

import java.util.Scanner;

public class LabProblem02_Q5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num1, num2;
        
    System.out.print("Input first number: ");
    num1 = in.nextInt();
    System.out.print("Input second number: ");
    num2 = in.nextInt();
  
    System.out.println("Product of two numbers: " + num1 + " x " + num2 + " = " + num1 * num2);
    }
}
