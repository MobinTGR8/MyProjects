//finite floating-point value or not
package labproblemset07;

import java.util.Scanner;

public class Q11 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a Double number: ");
        double doubleValue = in.nextDouble();
        System.out.print("Enter a Float number: ");
        float floatValue = in.nextFloat();

        boolean isDoubleFinite = Double.isFinite(doubleValue);
        boolean isFloatFinite = Float.isFinite(floatValue);

        System.out.println("Is the double value finite? " + isDoubleFinite);
        System.out.println("Is the float value finite? " + isFloatFinite);
    }
}
