package labproblemset08;

import java.util.Scanner;

public class Q8 {

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Input an alphabet: ");
            String input = scanner.nextLine();

            if (input.length() != 1) {
                System.out.println("Error! Please enter a single character.");
            } else {
                char ch = input.charAt(0);
                if (!Character.isLetter(ch)) {
                    System.out.println("Error! Please enter a letter.");
                } else {
                    ch = Character.toLowerCase(ch);
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                        System.out.println("Vowel");
                    } else {
                        System.out.println("Consonant");
                    }
                }
            }
        }
    }
}
