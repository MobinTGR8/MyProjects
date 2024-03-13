
package Q2019;

// Employee.java
 class Employee {
    private String firstName;
    private String lastName;
    private double monthlySalary;

    public Employee(String firstName, String lastName, double monthlySalary) {
        this.firstName = firstName;
        this.lastName = lastName;

        if (monthlySalary > 0.0) {
            this.monthlySalary = monthlySalary;
        }
    }

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public double getMonthlySalary() {
        return monthlySalary;
    }

    public void setMonthlySalary(double monthlySalary) {
        if (monthlySalary > 0.0) {
            this.monthlySalary = monthlySalary;
        }
    }

    public double getYearlySalary() {
        return monthlySalary * 12;
    }

    public void applyRaise(double percentage) {
        monthlySalary *= (1 + percentage / 100);
    }
}
// EmployeeTest.java
public class EmployeeTest {
    public static void main(String[] args) {
        Employee employee1 = new Employee("John", "Doe", 5000.0);
        Employee employee2 = new Employee("Jane", "Smith", 6000.0);

        // Display yearly salary
        System.out.println("Yearly Salary for " + employee1.getFirstName() + " " + employee1.getLastName() + ": $" + employee1.getYearlySalary());
        System.out.println("Yearly Salary for " + employee2.getFirstName() + " " + employee2.getLastName() + ": $" + employee2.getYearlySalary());

        // Give a 10% raise
        employee1.applyRaise(10);
        employee2.applyRaise(10);

        // Display updated yearly salary
        System.out.println("\nAfter 10% Raise:");
        System.out.println("Yearly Salary for " + employee1.getFirstName() + " " + employee1.getLastName() + ": $" + employee1.getYearlySalary());
        System.out.println("Yearly Salary for " + employee2.getFirstName() + " " + employee2.getLastName() + ": $" + employee2.getYearlySalary());
    }
}
