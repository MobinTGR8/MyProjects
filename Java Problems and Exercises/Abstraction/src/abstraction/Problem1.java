package abstraction;

abstract class Parent {

    abstract void message();
}

class FirstSubclass extends Parent {

    @Override
    void message() {
        System.out.println("This is first subclass");
    }
}

class SecondSubclass extends Parent {

    @Override
    void message() {
        System.out.println("This is second subclass");
    }
}

public class Problem1 {

    public static void main(String[] args) {

        FirstSubclass firstObj = new FirstSubclass();

        firstObj.message();

        SecondSubclass secondObj = new SecondSubclass();

        secondObj.message();
    }
}
