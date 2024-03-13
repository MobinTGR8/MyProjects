package Problem5;

public class Test {

    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5, 4);
        System.out.println("Rectangle Area: " + rectangle.calculateArea());
        System.out.println("Rectangle Perimeter: " + rectangle.calculatePerimeter());

        Square square = new Square(5);
        System.out.println("Square Area: " + square.calculateArea());
        System.out.println("Square Perimeter: " + square.calculatePerimeter());

        Square[] squares = new Square[15];
        for (int i = 0; i < 15; i++) {
            squares[i] = new Square(i + 1);
            System.out.println("Area of square " + (i + 1) + ": " + squares[i].calculateArea());
        }
    }
}
