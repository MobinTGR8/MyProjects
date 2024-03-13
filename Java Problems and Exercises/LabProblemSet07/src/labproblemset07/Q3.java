//Sum of digits
package labproblemset07;

import java.util.Scanner;

public class Q3 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num, temp, r, sum = 0;
        System.out.print("Input an integer between 0 and 1000: ");
        num = in.nextInt();
        temp = num;

        while (temp != 0) {
            r = temp % 10;
            sum = sum + r;
            temp = temp / 10;
        }
        System.out.println("The sum of all digits in " + num + " is " + sum);
    }

}
