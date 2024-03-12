package Problems;

class Shape {

    public void displayShape() {
        System.out.println("This is shape.");
    }
}

class Rectangle extends Shape {

    public void displayRectangleShape() {
        System.out.println("This is rectangular shape.");
    }
}

class Circle extends Shape {

    public void displayCircularShape() {
        System.out.println("This is circular shape.");
    }
}

class Square extends Rectangle {

    public void displaySquareAsRectangle() {
        System.out.println("Square is a rectangle.");
    }
}

public class Problem6 {

    public static void main(String[] args) {
        Square square = new Square();
        square.displayShape(); // Call method of 'Shape' class by the object of 'Square' class
        square.displayRectangleShape(); // Call method of 'Rectangle' class by the object of 'Square' class
    }
}
