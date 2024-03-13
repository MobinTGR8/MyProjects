package pattern;

import java.util.Scanner;

public class LeftTriangleStarPattern {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter row numbers: ");
        int n = in.nextInt();
        //row
        for (int i = 0; i < n; i++) {
            //space
            for (int j = 2 * (n - i); j >= 0; j--) {
                System.out.print(" ");
            }
            //column
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            //new line
            System.out.println();
        }
    }
}
