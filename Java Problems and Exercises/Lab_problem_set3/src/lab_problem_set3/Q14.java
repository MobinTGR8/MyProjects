//2102064 - Find the size of a specified file
package lab_problem_set3;

import java.io.File;

public class Q14 {
    public static void main(String[] args) {
  System.out.println("/home/students/abc.txt  : " + new File("abc.txt").length() + " bytes");
  System.out.println("/home/students/test.txt : " + new File("test.txt").length() + " bytes");
 }
}
