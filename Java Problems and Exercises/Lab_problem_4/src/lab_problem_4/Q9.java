//2102064 - Convert a given string into lowercase
package lab_problem_4;

import java.util.Scanner;

public class Q9 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Input a String: ");
        String line = in.nextLine();
        line = line.toLowerCase();
        System.out.println(line);
    }
}
