//2102064
package lab.problem.pkg02;

import java.util.Scanner;

public class LabProblem02_Q11 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the radius of Circle: ");
        double radius = in.nextDouble();
        
        double perimeter = 2 * Math.PI * radius;
        double area = Math.PI * radius * radius;

        System.out.println("Perimeter is = " + perimeter);
        System.out.println("Area is = " + area);
    }
}
