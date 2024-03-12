//sum, difference, product, average, distance, maximum and minimum
package labproblemset07;

import java.util.Scanner;

public class Q9 {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter the first number: ");
            int num1 = scanner.nextInt();
            
            System.out.print("Enter the second number: ");
            int num2 = scanner.nextInt();
            
            int sum = num1 + num2;
            int difference = num1 - num2;
            int product = num1 * num2;
            double average = (num1 + num2) / 2;
            double distance = Math.abs(num1 - num2);
            int maximum = Math.max(num1, num2);
            int minimum = Math.min(num1, num2);
            
            System.out.println("Sum: " + sum);
            System.out.println("Difference: " + difference);
            System.out.println("Product: " + product);
            System.out.println("Average: " + average);
            System.out.println("Distance: " + distance);
            System.out.println("Maximum: " + maximum);
            System.out.println("Minimum: " + minimum);
        }
    }
}
