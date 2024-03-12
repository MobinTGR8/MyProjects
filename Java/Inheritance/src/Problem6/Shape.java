
package Problem6;

public class Shape {
    
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

