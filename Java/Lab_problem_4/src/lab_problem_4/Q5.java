//2102064 - Convert seconds to hour, minute and seconds
package lab_problem_4;

import java.util.Scanner;

public class Q5 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Input seconds: ");
        int seconds = in.nextInt();
        int S = seconds % 60;
        int H = seconds / 60;
        int M = H % 60;
        H = H / 60;
        System.out.print(H + ":" + M + ":" + S);
        System.out.print("\n");

    }
}
