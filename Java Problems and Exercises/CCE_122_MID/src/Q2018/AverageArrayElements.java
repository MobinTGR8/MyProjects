
package Q2018;

import java.util.Scanner;

public class AverageArrayElements {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        int[] array = new int[size];
        int sum = 0;

        System.out.println("Enter the elements of the array:");

        for (int i = 0; i < size; i++) {
            array[i] = scanner.nextInt();
            sum += array[i];
        }

        double average = (double) sum / size;

        System.out.println("Average value of array elements: " + average);
    }
}
