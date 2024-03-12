//2102064 - Input and display your password
package lab_problem_set3;

import java.util.Scanner;

public class Q11 {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter your password: ");
            String password = scanner.nextLine();
            
            System.out.println("You entered the following password: " + password);
        }
    }
}
