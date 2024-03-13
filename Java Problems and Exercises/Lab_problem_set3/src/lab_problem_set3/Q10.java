//2102064 - ascii value of a given character
package lab_problem_set3;

import java.util.Scanner;

public class Q10 {

    public static void main(String[] String) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a character: ");
        int chr = in.next().charAt(0);
        System.out.println("The ASCII value of the character is :" + chr);
    }
}
