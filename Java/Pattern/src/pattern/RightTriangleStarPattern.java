package pattern;

import java.util.Scanner;

public class RightTriangleStarPattern {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter row numbers: ");
        int n = in.nextInt();
           //row
        for (int i = 0; i < n; i++) {
            //column
            for (int j = 0; j <= i; j++) {
                //star
                System.out.print("* ");
            }
            //new line
            System.out.println();
        }
    }
}
