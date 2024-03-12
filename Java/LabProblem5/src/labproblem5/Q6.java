//2102064 - Array
package labproblem5;

public class Q6 {

    public static void main(String[] args) {

        int[] num_array1 = {50, -20, 0, 30, 40, 60, 12};
        int[] num_array2 = {45, 20, 10, 20, 30, 50, 12};

        if (num_array1.length >= 2 && num_array2.length >= 2) {
            System.out.println(num_array1[0] == num_array2[0] || num_array1[num_array1.length - 1] == num_array2[num_array2.length - 1]);
        } else {
            System.out.println("Array lengths less than 2.");
        }
    }
}
