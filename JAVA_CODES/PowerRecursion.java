public class PowerRecursion {

    // Optimized recursive function to calculate x^n
    public static double power(double x, int n) {
        // Base case
        if (n == 0) {
            return 1;
        }
        // If n is negative, handle reciprocal
        if (n < 0) {
            return 1.0 / power(x, -n);
        }
        // Divide and conquer
        double half = power(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return x * half * half;
        }
    }

    public static void main(String[] args) {
        double x = 2;
        int n = 3;

        double result = power(x, n);
        System.out.println(x + "^" + n + " = " + result);
    }
}
