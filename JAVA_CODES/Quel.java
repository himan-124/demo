package Class.Que;

abstract class Shape {
    abstract int area();
}

class Squre extends Shape {
    int area(int a, int b) {
        return a * b;
    }
}

public class Quel {
    public static void main(String[] args) {
        Squre obj = new Squre();
        obj.area(5,5);
}
}
