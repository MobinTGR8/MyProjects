//Matrix
package labproblemset06;

public class Q20 {

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 3, 5, 7},
            {10, 11, 16, 20},
            {23, 30, 34, 50}
        };
        int target = 3;

        boolean found = searchMatrix(matrix, target);

        if (found) {
            System.out.println("The target " + target + " is present in the matrix.");
        } else {
            System.out.println("The target " + target + " is not found in the matrix.");
        }
    }

    public static boolean searchMatrix(int[][] matrix, int target) {
        if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
            return false;
        }

        int numRows = matrix.length;
        int numCols = matrix[0].length;

        int left = 0;
        int right = numRows * numCols - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midValue = matrix[mid / numCols][mid % numCols];

            if (midValue == target) {
                return true;
            } else if (midValue < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
}
