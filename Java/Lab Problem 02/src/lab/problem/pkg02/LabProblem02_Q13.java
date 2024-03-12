//2102064
package lab.problem.pkg02;

import java.util.Scanner;

public class LabProblem02_Q13 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double height, width;
        
        System.out.print("Enter height: ");
        height = in.nextDouble();
        System.out.print("Enter width: ");
        width = in.nextDouble();
        
        double area = width * height;
        double perimeter = 2 * (height + width);
        
        System.out.println("Area of a rectangle is : " + area);
        System.out.println("Perimeter of a rectangle is : " + perimeter);
    }
}
