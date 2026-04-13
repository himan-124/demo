// Recursive function to find GCD of two numbers
public class GCDRecursion {
    public static int gcd(int a, int b) {
        // Base case: if b becomes 0, gcd is a
        if (b == 0) {
            return a;
        }
        // Recursive case: gcd(a, b) = gcd(b, a % b)
        return gcd(b, a % b);
    }
        public static void main(String[] args) {
        int num1 = 12;
        int num2 = 18;

        int result = gcd(num1, num2);
        System.out.println("GCD of " + num1 + " and " + num2 + " = " + result);
    }
}
