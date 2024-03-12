package Q2020;

import java.util.Scanner;

public class Prob01_reg {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int[] num = new int[5];
        int neg_count = 0;
        int pos_count = 0;
        int zero_count = 0;
        int equal_count = 0;

        System.out.println("Enter five numbers:");

        for (int i = 0; i < 5; i++) {
            num[i] = scn.nextInt();

            if (num[i] < 0) {
                neg_count++;
            } else if (num[i] > 0) {
                pos_count++;
            } else {
                zero_count++;
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (num[i] == num[j]) {
                    equal_count++;
                }
            }

        }
        System.out.println("Number of negative numbers: " + neg_count);
        System.out.println("Number of positive numbers: " + pos_count);
        System.out.println("Number of zeros: " + zero_count);
        System.out.println("Number of equal numbers: " + equal_count);

    }

}
