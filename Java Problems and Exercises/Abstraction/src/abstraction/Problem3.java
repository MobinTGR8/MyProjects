package abstraction;

abstract class Marks {

    abstract double getPercentage();
}

class A extends Marks {

    private int subject1, subject2, subject3;

    A(int s1, int s2, int s3) {
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
    }

    @Override
    double getPercentage() {
        return (subject1 + subject2 + subject3) / 3.0;
    }
}

class B extends Marks {

    private int subject1, subject2, subject3, subject4;

    B(int s1, int s2, int s3, int s4) {
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
        subject4 = s4;
    }

    @Override
    double getPercentage() {
        return (subject1 + subject2 + subject3 + subject4) / 4.0;
    }
}

public class Problem3 {

    public static void main(String[] args) {
        A studentA = new A(85, 90, 92);
        B studentB = new B(78, 85, 90, 88);

        System.out.println("Percentage of Student A: " + studentA.getPercentage() + "%");
        System.out.println("Percentage of Student B: " + studentB.getPercentage() + "%");
    }
}
