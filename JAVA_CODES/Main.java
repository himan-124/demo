class Animal {
    void eat() {
        System.out.println("pizza");
    }

    void data() {
        System.out.println("hiii");
    }
}

class Dog extends Animal {
    void eat() {
        System.out.println("biryanii");
    }
    void sleep(){
        System.out.println("hello");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal s1 = new Dog();
        s1.eat();  
    }
}