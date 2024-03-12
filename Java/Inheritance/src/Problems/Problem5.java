package Problems;

class Rectangle {

    double length;
    double breadth;

    public Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double calculateArea() {
        return length * breadth;
    }

    public double calculatePerimeter() {
        return 2 * (length + breadth);
    }
}

class Square extends Rectangle {

    public Square(double side) {
        super(side, side);
    }
}

public class Problem5 {

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
