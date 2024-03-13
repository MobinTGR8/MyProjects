//square, cube, and fourth power
package labproblemset07;

import java.util.Scanner;

public class Q8 {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter a number: ");
            double number = scanner.nextDouble();
            
            double square = Math.pow(number, 2);
            double cube = Math.pow(number, 3);
            double fourthPower = Math.pow(number, 4);
            
            System.out.println("Square: " + square);
            System.out.println("Cube: " + cube);
            System.out.println("Fourth Power: " + fourthPower);
        }
    }
}
