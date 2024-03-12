package Problem2;

public class Test {

    public static void main(String[] args) {
        // 1.Create object of parent class and call its method
        ParentClass parentObj = new ParentClass();
        parentObj.printP();

        // 2.Create object of child class and call its method
        ChildClass childObj = new ChildClass();
        childObj.printC();

    }
}
