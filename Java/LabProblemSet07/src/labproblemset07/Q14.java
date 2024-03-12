//extract the primitive type value from a given BigInteger value
package labproblemset07;

import java.math.BigInteger;

public class Q14 {
    public static void main(String[] args) {
        BigInteger bigIntegerValue = new BigInteger("12345678901234567890");

        // Extract as an int (if within the range of int)
        int intValue = bigIntegerValue.intValue();

        // Extract as a long (if within the range of long)
        long longValue = bigIntegerValue.longValue();

        System.out.println("BigInteger Value: " + bigIntegerValue);
        System.out.println("Extracted as int: " + intValue);
        System.out.println("Extracted as long: " + longValue);
    }
}
