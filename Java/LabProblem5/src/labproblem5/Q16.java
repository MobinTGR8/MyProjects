//2102064
package labproblem5;

import java.util.Scanner;

public class Q16 {
    public static void main(String[] args) {
        System.out.println("Input the value of n: ");
        try (Scanner in = new Scanner(System.in)) {
            int n = in.nextInt();
            while (n != 1) {
                if (n % 2 == 0) {
                    n = n / 2;
                } else {
                    n = (3 * n + 1) / 2;
                }
            }
            System.out.println("\nValue of n = " + n);
        }
    }
}
