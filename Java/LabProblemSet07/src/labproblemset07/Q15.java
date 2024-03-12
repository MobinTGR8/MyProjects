package labproblemset07;

public class Q15 {

    public static void main(String[] args) {
        float floatValue = 3.14159f;
        double doubleValue = 2.71828;

        float nextUpFloat = Math.nextUp(floatValue);
        float nextDownFloat = Math.nextDown(floatValue);
        double nextUpDouble = Math.nextUp(doubleValue);
        double nextDownDouble = Math.nextDown(doubleValue);

        System.out.println("Original float value: " + floatValue);
        System.out.println("Next up float value: " + nextUpFloat);
        System.out.println("Next down float value: " + nextDownFloat);
        System.out.println("Original double value: " + doubleValue);
        System.out.println("Next up double value: " + nextUpDouble);
        System.out.println("Next down double value: " + nextDownDouble);
    }
}
