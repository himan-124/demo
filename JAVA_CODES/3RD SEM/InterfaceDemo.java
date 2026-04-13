//Q1. Create two interfaces Walkable and Runnable.
//Each should have a method: walk() and run() respectively.
//Then, create a class Human that implements both interfaces and defines both methods.
//Create a main method where an object of Human is created and both methods are called.

// Define the Walkable interface
interface Walkable {
    void walk();
}

// Define the Runnable interface
interface Runnable {
    void run();
}

// Human class implements both interfaces
class Human implements Walkable, Runnable {
    @Override
    public void walk() {
        System.out.println("Human is walking.🚶‍♂️🚶");
    }

    @Override
    public void run() {
        System.out.println("Human is running.🏃‍♂️🏃");
    }
}

// Main class to execute the program
public class InterfaceDemo {
    public static void main(String[] args) {
        Human person = new Human();
        person.walk();
        person.run();
    }
}