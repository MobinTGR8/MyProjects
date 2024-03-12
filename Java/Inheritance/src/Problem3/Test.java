package Problem3;

public class Test {

    public static void main(String[] args) {
        Employee emp = new Employee();
        emp.name = "Rahim Sheikh";
        emp.age = 25;
        emp.phoneNumber = "1234567890";
        emp.address = "Dumki, Patuakhali";
        emp.salary = 20000.00;
        emp.specialization = "Accounting";

        System.out.println("Employee Details:");
        System.out.println("Name: " + emp.name);
        System.out.println("Age: " + emp.age);
        System.out.println("Phone number: " + emp.phoneNumber);
        System.out.println("Address: " + emp.address);
        emp.printSalary();
        System.out.println("Specialization: " + emp.specialization);

        Manager mgr = new Manager();
        mgr.name = "Mobin Haque";
        mgr.age = 21;
        mgr.phoneNumber = "01742650312";
        mgr.address = "Naogaon, Rajshahi";
        mgr.salary = 80000.00;
        mgr.department = "Sales";

        System.out.println("\nManager Details:");
        System.out.println("Name: " + mgr.name);
        System.out.println("Age: " + mgr.age);
        System.out.println("Phone number: " + mgr.phoneNumber);
        System.out.println("Address: " + mgr.address);
        mgr.printSalary();
        System.out.println("Department: " + mgr.department);
    }
}
