//Array
package labproblemset06;

import java.util.Arrays;

public class Q4 {

    public static void main(String[] args) {
        int[] array_nums = {11, 15, 13, 10, 45, 20, 33, 53};
        int result = 0;
        System.out.println("Original Array: " + Arrays.toString(array_nums));

        int l = 0;
        int[] new_array;
        while (array_nums[l] != 10) {
            l++;
        }
        new_array = new int[l];
        System.arraycopy(array_nums, 0, new_array, 0, l);
        System.out.println("New Array: " + Arrays.toString(new_array));
    }
}
