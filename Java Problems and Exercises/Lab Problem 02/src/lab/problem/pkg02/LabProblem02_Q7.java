//2102064
package lab.problem.pkg02;

import java.util.Scanner;

public class LabProblem02_Q7 {
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
   
    System.out.print("Input a number: ");
    int num = in.nextInt();
   
    for (int i = 1; i <= 10; i++)
    {
    System.out.println(num + " x " + i + " = " + (num * i));
    }
 }
}
