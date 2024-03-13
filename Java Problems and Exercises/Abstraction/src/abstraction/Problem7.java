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

public class Problem7 {

    public static void main(String[] args) {
        Area areaObj = new Area();

        double[] rectangleLengths = {5.0, 8.0, 6.0, 10.0};
        double[] rectangleBreadths = {3.0, 4.0, 7.0, 5.0};

        double[] squareSides = {4.0, 6.0, 3.0, 5.0};

        double[] circleRadii = {2.0, 3.5, 4.0, 2.5, 6.0};

        for (int i = 0; i < 4; i++) {
            areaObj.RectangleArea(rectangleLengths[i], rectangleBreadths[i]);
        }

        for (int i = 0; i < 4; i++) {
            areaObj.SquareArea(squareSides[i]);
        }

        for (int i = 0; i < 5; i++) {
            areaObj.CircleArea(circleRadii[i]);
        }
    }
}
