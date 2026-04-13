

abstract class Shape {
    abstract int area();
}

class Squre extends Shape {
    int area(int a, int b) {
        return a * b;
    }

    @Override
    int area() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'area'");
    }
}

public class Quel {
    public static void main(String[] args) {
        Squre obj = new Squre();
        obj.area(5,5);
}
}
