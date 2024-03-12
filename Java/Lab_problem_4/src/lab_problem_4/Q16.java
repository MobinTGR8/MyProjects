//2102064
package lab_problem_4;

public class Q16 {

    public static void main(String[] args) {

        int sum = 0;
        for (int i = 2; i <= 100; i++) {
            if (isPrime(i)) {
                sum += i;
            }
        }
        System.out.println("Sum of the prime numbers till 100: " + sum);
    }

    private static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
