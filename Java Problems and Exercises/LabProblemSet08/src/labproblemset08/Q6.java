package labproblemset08;

import java.util.Scanner;

public class Q6 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Input floating-point number: ");
        double x = in.nextDouble();
        System.out.print("Input floating-point another number: ");
        double y = in.nextDouble();

        x = Math.round(x * 1000);
        x = x / 1000;

        y = Math.round(y * 1000);
        y = y / 1000;

        if (x == y) {
            System.out.println("They are the same up to three decimal places");
        } else {
            System.out.println("They are different");
        }
    }
}
