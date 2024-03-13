
package labproblemset06;

public class Q18 {
    public static void main(String[] args) {
        String mainString = "Python.";
        String searchString = "yt";

        int firstOccurrence = findFirstOccurrence(mainString, searchString);

        if (firstOccurrence != -1) {
            System.out.println("First occurrence of \"" + searchString + "\" starts at position: " + firstOccurrence);
        } else {
            System.out.println("String \"" + searchString + "\" not found in the main string.");
        }
    }

    public static int findFirstOccurrence(String mainString, String searchString) {
        int index = mainString.indexOf(searchString);
        return index;
    }
}
