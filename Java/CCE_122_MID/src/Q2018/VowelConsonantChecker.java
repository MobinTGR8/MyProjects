
package Q2018;


import java.util.Scanner;

public class VowelConsonantChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Input an alphabet: ");
        char input = scanner.next().charAt(0);

        if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
            input = Character.toLowerCase(input); // Convert to lowercase for simplicity

            if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') {
                System.out.println("Input letter is: Vowel");
            } else {
                System.out.println("Input letter is: Consonant");
            }
        } else {
            System.out.println("Error: Input is not a valid letter.");
        }
    }
}

