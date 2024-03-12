
package pattern;

import java.util.Scanner;

public class ReversePyramidStarPattern {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter row numbers: ");
        int n = in.nextInt();
        //row
        for (int i = 0; i <= n - 1; i++) {
            //space
            for (int j = 0; j <= i; j++) {
                System.out.print(" ");
            }
            //column
            for (int k = 0; k <= n - 1 - i; k++) {
                System.out.print("*" + " ");
            }
            //new line
            System.out.println();
        }
    }
}
