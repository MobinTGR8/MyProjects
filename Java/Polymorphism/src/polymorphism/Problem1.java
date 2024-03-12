package polymorphism;

class Shape {

    public void show() {
        System.out.println("This is a shape.");
    }

    public void getInfo() {
        System.out.println("Method getInfo() in Shape class.");
    }
}

class Circle extends Shape {

    @Override
    public void show() {
        System.out.println("This is a circle.");
    }
}

class Rectangle extends Shape {

    @Override
    public void show() {
        System.out.println("This is a rectangle.");
    }
}

public class Problem1 {

    public static void main(String[] args) {
        Shape shape1 = new Circle();
        Shape shape2 = new Rectangle();

        // Polymorphism: calling overridden method show()
        shape1.show();  // Output: This is a circle.
        shape2.show();  // Output: This is a rectangle.

        // Calling method getInfo() which is not overridden
        shape1.getInfo();  // Output: Method getInfo() in Shape class.
        shape2.getInfo();  // Output: Method getInfo() in Shape class.
    }
}
