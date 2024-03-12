package Problem7;

class Point {

    int x;
    int y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

class Quadrilateral {

    Point point1;
    Point point2;
    Point point3;
    Point point4;

    public Quadrilateral(Point point1, Point point2, Point point3, Point point4) {
        this.point1 = point1;
        this.point2 = point2;
        this.point3 = point3;
        this.point4 = point4;
    }

    // Calculate area method for Quadrilateral
    public double calculateArea() {
        return 0.0; // Not meaningful for a generic quadrilateral
    }
}

class Trapezoid extends Quadrilateral {

    public Trapezoid(Point point1, Point point2, Point point3, Point point4) {
        super(point1, point2, point3, point4);
    }

    // Calculate area method for Trapezoid
    @Override
    public double calculateArea() {
        double base1 = Math.abs(point1.x - point2.x);
        double base2 = Math.abs(point3.x - point4.x);
        double height = Math.abs(point1.y - point4.y); // Assumption: height is the vertical distance between the two parallel sides
        return (base1 + base2) * height / 2.0;
    }
}

class Parallelogram extends Quadrilateral {

    public Parallelogram(Point point1, Point point2, Point point3, Point point4) {
        super(point1, point2, point3, point4);
    }

    // Calculate area method for Parallelogram
    @Override
    public double calculateArea() {
        double base = Math.abs(point1.x - point2.x);
        double height = Math.abs(point1.y - point4.y); // Assumption: height is the perpendicular distance between the base and the opposite side
        return base * height;
    }
}

class Rectangle extends Parallelogram {

    public Rectangle(Point point1, Point point2, Point point3, Point point4) {
        super(point1, point2, point3, point4);
    }

    // Calculate area method for Rectangle
    @Override
    public double calculateArea() {
        double length = Math.abs(point1.x - point2.x);
        double width = Math.abs(point1.y - point4.y); // Assumption: width is the perpendicular distance between the length and breadth
        return length * width;
    }
}

class Square extends Rectangle {

    public Square(Point point1, Point point2, Point point3, Point point4) {
        super(point1, point2, point3, point4);
    }

    // Calculate area method for Square
    @Override
    public double calculateArea() {
        double side = Math.abs(point1.x - point2.x); // Assuming all sides are of equal length
        return side * side;
    }
}
