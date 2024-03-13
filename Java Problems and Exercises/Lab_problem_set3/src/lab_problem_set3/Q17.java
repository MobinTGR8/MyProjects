//2102064 - Print the odd numbers from 1 to 99
package lab_problem_set3;

public class Q17 {
    public static void main(String[] args){
	for (int i = 1; i < 100; i++) {
			if (i % 2 != 0) {
				System.out.println(i);
			}
		}
    }
}
