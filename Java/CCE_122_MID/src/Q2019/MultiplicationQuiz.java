
package Q2019;


import java.security.SecureRandom;
import java.util.Scanner;

public class MultiplicationQuiz {
    private static final SecureRandom random = new SecureRandom();
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        while (true) {
            int num1 = generateRandomNumber();
            int num2 = generateRandomNumber();

            askQuestion(num1, num2);
        }
    }

    private static int generateRandomNumber() {
        return random.nextInt(9) + 1; // Generates random number between 1 and 9
    }

    private static void askQuestion(int num1, int num2) {
        System.out.printf("How much is %d times %d? ", num1, num2);
        int userAnswer = scanner.nextInt();

        if (userAnswer == num1 * num2) {
            System.out.println("Very good!");
        } else {
            System.out.println("No. Please try again.");
            askQuestion(num1, num2); // Recursively ask the same question until the correct answer is given
        }
    }
}

