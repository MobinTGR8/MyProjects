package labproblemset08;

import java.util.Scanner;

public class Q14 {

    public static void main(String[] args) {
        System.out.print("Input the number: ");
        {
            Scanner in = new Scanner(System.in);
            int n = in.nextInt();

            System.out.println("\n");
            for (int i = 1; i <= 10; i++) {
                System.out.println(n + " X " + i + " = " + n * i);
            }
        }
    }
}
