package labproblemset08;

import java.util.Scanner;

public class Q32 {

    public static void main(String[] args) {
        double num1;
        double num2;
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Input first floatingPoint number: ");
            num1 = input.nextDouble();
            System.out.print("Input second floatingPoint number: ");
            num2 = input.nextDouble();
        }

        if (Math.abs(num1 - num2) <= 0.01) {
            System.out.println("These numbers are the same.");
        } else {
            System.out.println("These numbers are different.");
        }
    }
}
