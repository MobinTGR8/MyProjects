//2102064 - Array
package labproblem5;

import java.util.Arrays;
import java.util.Scanner;

public class Q25 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Array elements value n: ");
        int n = in.nextInt();
        String[] arr_string = new String[n];

        for (int i = 0; i < n; i++) {
            arr_string[i] = String.valueOf(i);
        }
        System.out.println("New Array: " + Arrays.toString(arr_string));
    }
}
