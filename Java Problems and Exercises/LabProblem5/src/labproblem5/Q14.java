//2102064 - String
package labproblem5;

public class Q14 {

    public static void main(String[] args) {
        String string1 = "Python";
        int slength = 3;
        if (slength > string1.length()) {
        }

        String subpart = string1.substring(string1.length() - 3);
        System.out.println(subpart + string1 + subpart);
    }
}
