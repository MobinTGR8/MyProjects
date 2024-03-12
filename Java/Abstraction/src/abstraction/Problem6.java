package abstraction;

abstract class Shape {

    abstract void RectangleArea(double length, double breadth);

    abstract void SquareArea(double side);

    abstract void CircleArea(double radius);
}

class Area extends Shape {

    @Override
    void RectangleArea(double length, double breadth) {
        double area = length * breadth;
        System.out.println("Area of Rectangle: " + area);
    }

    @Override
    void SquareArea(double side) {
        double area = side * side;
        System.out.println("Area of Square: " + area);
    }

    @Override
    void CircleArea(double radius) {
        double area = Math.PI * radius * radius;
        System.out.println("Area of Circle: " + area);
    }
}

public class Problem6 {

    public static void main(String[] args) {
        Area areaObj = new Area();

        areaObj.RectangleArea(5.0, 8.0);
        areaObj.SquareArea(4.0);
        areaObj.CircleArea(3.0);
    }
}
