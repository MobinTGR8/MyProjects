//2102064 - Array
package labproblem5;

public class Q5 {

    public static void main(String[] args) {
        int[] num_array = {50, -20, 0, 30, 40, 60, 10};

        System.out.println(num_array.length >= 2 && num_array[0] == num_array[num_array.length - 1]);
    }
}
