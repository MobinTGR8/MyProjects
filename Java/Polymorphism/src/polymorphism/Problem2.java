package polymorphism;

class SuperClass {

    protected int data1;

    public SuperClass(int data1) {
        this.data1 = data1;
    }

    public void setData1(int data1) {
        this.data1 = data1;
    }

    public int getData1() {
        return data1;
    }
}

class SubClass extends SuperClass {

    private int data2;

    public SubClass(int data1, int data2) {
        super(data1);
        this.data2 = data2;
    }

    public void setData2(int data2) {
        this.data2 = data2;
    }

    public int getData2() {
        return data2;
    }

    public String checkCondition() {
        if (data1 == 10 && data2 == 15) {
            return "Condition True!";
        } else {
            return "Condition False!";
        }
    }
}

public class Problem2 {

    public static void main(String[] args) {
        SubClass subClass = new SubClass(10, 15);

        System.out.println("Data1: " + subClass.getData1()); // Output: Data1: 10
        System.out.println("Data2: " + subClass.getData2()); // Output: Data2: 15

        System.out.println(subClass.checkCondition()); // Output: Condition True!

        // Setting new values for data1 and data2
        subClass.setData1(5);
        subClass.setData2(20);

        System.out.println(subClass.checkCondition()); // Output: Condition False!
    }
}
