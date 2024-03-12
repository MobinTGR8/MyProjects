//Fahrenheit to Celsius 
package labproblemset07;

import java.util.Scanner;

public class Q1 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter temperature in Fahrenheit: ");
        double f = in.nextDouble();

        double c = (5 * (f - 32)) / 9;
        System.out.println(f + " Fahrenhrit is equal to " + c + " degree celsius");
    }
}
