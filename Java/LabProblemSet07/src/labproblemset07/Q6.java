//BMI
package labproblemset07;

import java.util.Scanner;

public class Q6 {

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter your weight in kilograms: ");
            double weight = scanner.nextDouble();

            System.out.print("Enter your height in meters: ");
            double height = scanner.nextDouble();

            double bmi = calculateBMI(weight, height);

            System.out.println("Your BMI is: " + bmi);
        }
    }

    public static double calculateBMI(double weight, double height) {
        return weight / (height * height);
    }
}
