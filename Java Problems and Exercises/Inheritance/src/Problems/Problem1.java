package Problems;

class ParentClass {

    public void printP() {
        System.out.println("This is parent class");
    }
}

class ChildClass extends ParentClass {
    
    public void printC() {
        System.out.println("This is child class");
    }
}

public class Problem1 {

    public static void main(String[] args) {
        // 1.Create object of parent class and call its method
        ParentClass parentObj = new ParentClass();
        parentObj.printP();

        // 2.Create object of child class and call its method
        ChildClass childObj = new ChildClass();
        childObj.printC();

        // 3.Call method of parent class by object of child class
        childObj.printP();
    }
}
