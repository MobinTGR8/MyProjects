//2102064 - String
package labproblem5;

import java.util.Scanner;

public class Q2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a Word: ");
        String str1 = in.nextLine();
        int len = str1.length();
        if (len >= 3) {
            System.out.println(str1.substring(0, 3));
        } else if (len == 1) {
            System.out.println((str1.charAt(0) + "##"));
        } else {
            System.out.println("###");
        }
    }
}
