package polymorphism;

class Pizza {

    private String size;
    private int cheeseToppings;
    private int pepperoniToppings;
    private int hamToppings;

    public Pizza(String size, int cheeseToppings, int pepperoniToppings, int hamToppings) {
        this.size = size;
        this.cheeseToppings = cheeseToppings;
        this.pepperoniToppings = pepperoniToppings;
        this.hamToppings = hamToppings;
    }

    // Getter and setter methods
    public String getSize() {
        return size;
    }

    public void setSize(String size) {
        this.size = size;
    }

    public int getCheeseToppings() {
        return cheeseToppings;
    }

    public void setCheeseToppings(int cheeseToppings) {
        this.cheeseToppings = cheeseToppings;
    }

    public int getPepperoniToppings() {
        return pepperoniToppings;
    }

    public void setPepperoniToppings(int pepperoniToppings) {
        this.pepperoniToppings = pepperoniToppings;
    }

    public int getHamToppings() {
        return hamToppings;
    }

    public void setHamToppings(int hamToppings) {
        this.hamToppings = hamToppings;
    }

    public double calcCost() {
        double baseCost;
        switch (size.toLowerCase()) {
            case "small":
                baseCost = 10;
                break;
            case "medium":
                baseCost = 12;
                break;
            case "large":
                baseCost = 14;
                break;
            default:
                throw new IllegalArgumentException("Invalid pizza size");
        }
        return baseCost + 2 * (cheeseToppings + pepperoniToppings + hamToppings);
    }

    public String getDescription() {
        return String.format("Size: %s, Cheese Toppings: %d, Pepperoni Toppings: %d, Ham Toppings: %d",
                size, cheeseToppings, pepperoniToppings, hamToppings);
    }
}

class PizzaOrder {

    private static final int MAX_PIZZAS = 3;
    private Pizza[] pizzas;
    private int numberOfPizzas;

    public PizzaOrder() {
        pizzas = new Pizza[MAX_PIZZAS];
        numberOfPizzas = 0;
    }

    public void addPizza(Pizza pizza) {
        if (numberOfPizzas < MAX_PIZZAS) {
            pizzas[numberOfPizzas] = pizza;
            numberOfPizzas++;
        } else {
            System.out.println("Maximum number of pizzas reached for this order.");
        }
    }

    public double calcTotal() {
        double totalCost = 0;
        for (int i = 0; i < numberOfPizzas; i++) {
            totalCost += pizzas[i].calcCost();
        }
        return totalCost;
    }
}

public class Problem3 {

    public static void main(String[] args) {
        Pizza pizza1 = new Pizza("large", 1, 1, 2);
        Pizza pizza2 = new Pizza("medium", 2, 0, 1);

        PizzaOrder order = new PizzaOrder();
        order.addPizza(pizza1);
        order.addPizza(pizza2);

        System.out.println("Pizza 1: " + pizza1.getDescription());
        System.out.println("Cost of Pizza 1: $" + pizza1.calcCost());

        System.out.println("\nPizza 2: " + pizza2.getDescription());
        System.out.println("Cost of Pizza 2: $" + pizza2.calcCost());

        System.out.println("\nTotal cost of the order: $" + order.calcTotal());
    }
}
