//2102064 - compute the area of a polygon.
package lab_problem_set3;

import java.util.Scanner;

public class Q4 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Input the number of sides on the polygon: ");
        int ns = in.nextInt();

        System.out.print("Input the length of one of the sides: ");
        double side = in.nextDouble();
        System.out.print("The area is: " + polygonArea(ns, side) + "\n");
    }

    public static double polygonArea(int ns, double side) {
        return (ns * (side * side)) / (4.0 * Math.tan((Math.PI / ns)));
    }
}
