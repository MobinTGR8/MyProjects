package abstraction;

abstract class Animals {

    abstract void cats();

    abstract void dogs();
}

class Cats extends Animals {

    @Override
    void cats() {
        System.out.println("Cats meow");
    }

    @Override
    void dogs() {
        // This method is overridden, but we provide an empty implementation for demonstration
    }
}

class Dogs extends Animals {

    @Override
    void cats() {
        // This method is overridden, but we provide an empty implementation for demonstration
    }

    @Override
    void dogs() {
        System.out.println("Dogs bark");
    }
}

public class Problem5 {

    public static void main(String[] args) {
        Cats catsObj = new Cats();
        Dogs dogsObj = new Dogs();

        catsObj.cats();
        catsObj.dogs(); // Since 'dogs' method is overridden with an empty implementation

        dogsObj.cats(); // Since 'cats' method is overridden with an empty implementation
        dogsObj.dogs();
    }
}
