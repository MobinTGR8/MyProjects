//2102064 - List the available character sets in charset objects
package lab_problem_set3;

import java.nio.charset.Charset;

public class Q9 {

    public static void main(String[] args) {
        System.out.println("List of available character sets: ");
        for (String str : Charset.availableCharsets().keySet()) {
            System.out.println(str);
        }
    }
}
