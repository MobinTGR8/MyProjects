package abstraction;

abstract class AbstractClass {

    AbstractClass() {
        System.out.println("This is the constructor of the abstract class");
    }

    abstract void a_method();

    void normalMethod() {
        System.out.println("This is a normal method of the abstract class");
    }
}

class SubClass extends AbstractClass {

    @Override
    void a_method() {
        System.out.println("This is the abstract method in the subclass");
    }
}

public class Problem4 {

    public static void main(String[] args) {
        SubClass subClassObj = new SubClass();

        subClassObj.a_method();
        subClassObj.normalMethod();
    }
}
