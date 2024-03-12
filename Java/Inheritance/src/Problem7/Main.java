// Similar implementations for Rectangle, Parallelogram, and Trapezoid
package Problem7;

public class Main {

    public static void main(String[] args) {
        Point point1 = new Point(0, 0);
        Point point2 = new Point(4, 0);
        Point point3 = new Point(4, 4);
        Point point4 = new Point(0, 4);

        Square square = new Square(point1, point2, point3, point4);
        System.out.println("Square Area: " + square.calculateArea());

        // Create more objects and calculate areas for other shapes
    }
}
