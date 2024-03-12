package pattern;

import java.util.Scanner;

public class MirroredRightTriangleStarPattern {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter row numbers: ");
        int n = in.nextInt();
        //row
        for (int i = 0; i <= n; i++) {
            //space
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            //column
            for (int k = 0; k <= i; k++) {
                System.out.print("*");
            }
            //new line
            System.out.println();
        }
    }
}
