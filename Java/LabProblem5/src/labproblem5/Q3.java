//2102064 - String
package labproblem5;

import java.util.Scanner;

public class Q3 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter 1st word: ");
        String str1 = in.nextLine();
        System.out.print("Enter 2nd word: ");
        String str2 = in.nextLine();

        int length2 = str2.length();
        String result = "";
        result += (str1.length() >= 1) ? str1.charAt(0) : '#';
        result += (length2 >= 1) ? str2.charAt(length2 - 1) : '#';
        System.out.println(result);
    }
}
