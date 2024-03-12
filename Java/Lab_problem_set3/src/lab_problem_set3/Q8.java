//2102064 - Display a three-digit number using 1, 2, 3, 4
package lab_problem_set3;

public class Q8 {

    public static void main(String[] args) {
        int amount = 0;
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 4; j++) {
                for (int k = 1; k <= 4; k++) {
                    if (k != i && k != j && i != j) {
                        amount++;
                        System.out.println(i + "" + j + "" + k);
                    }
                }
            }
        }
        System.out.println("Total number of the three-digit-number is " + amount);
    }
}
