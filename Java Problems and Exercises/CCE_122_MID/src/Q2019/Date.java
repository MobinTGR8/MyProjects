
package Q2019;

public class Date {
    private int month;
    private int day;
    private int year;

    public Date(int month, int day, int year) {
        this.month = month;
        this.day = day;
        this.year = year;
    }

    public Date(String monthString, int day, int year) {
        this.month = convertMonthStringToNumber(monthString);
        this.day = day;
        this.year = year;
    }

    public Date(int dayOfYear, int year) {
        // Logic to convert day of year to month and day goes here
    }

    private int convertMonthStringToNumber(String monthString) {
        // Logic to convert month string to numeric value goes here
        // You can use a series of if statements or a HashMap for this conversion
        return 1; // Placeholder value, replace with actual conversion
    }

    // Other methods for outputting the date in different formats
}
