
package Q2018;

public class PentagonalNumbers {
    public static void main(String[] args) {
        for (int n = 1; n <= 50; n++) {
            int pentagonalNumber = getPentagonalNumber(n);
            System.out.println(pentagonalNumber);
        }
    }

    private static int getPentagonalNumber(int n) {
        return n * (3 * n - 1) / 2;
    }
}
