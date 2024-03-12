//inches to meters
package labproblemset07;

import java.util.Scanner;

public class Q2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number in inches: ");
        double i = in.nextDouble();
        double m = i * 0.0254;
        System.out.println(i + " inch is " + m + " meters");

    }
}
