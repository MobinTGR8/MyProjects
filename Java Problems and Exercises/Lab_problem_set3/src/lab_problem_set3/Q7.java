//2102064 - Count the letters, spaces, numbers and other characters of an input string
package lab_problem_set3;

import java.util.Scanner;

public class Q7 {

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter a string: ");
            String input = scanner.nextLine();

            int letterCount = 0;
            int spaceCount = 0;
            int digitCount = 0;
            int otherCount = 0;

            for (char ch : input.toCharArray()) {
                if (Character.isLetter(ch)) {
                    letterCount++;
                } else if (Character.isDigit(ch)) {
                    digitCount++;
                } else if (Character.isWhitespace(ch)) {
                    spaceCount++;
                } else {
                    otherCount++;
                }
            }
            System.out.println("Letters: " + letterCount);
            System.out.println("Spaces: " + spaceCount);
            System.out.println("Numbers: " + digitCount);
            System.out.println("Other characters: " + otherCount);
        }
    }
}
