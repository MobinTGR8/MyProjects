//2102064 - compute hexagon area.
package lab_problem_set3;

import java.util.Scanner;

public class Q3 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Input the length of a side of the hexagon: ");
        double s = in.nextDouble();
        System.out.print("The area of the hexagon is: " + hexagonArea(s) + "\n");
    }

    public static double hexagonArea(double s) {
        return (6 * (s * s)) / (4 * Math.tan(Math.PI / 6));
    }
}
