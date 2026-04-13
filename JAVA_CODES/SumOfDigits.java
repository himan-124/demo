// Recursive function to calculate sum of digits
 public class SumOfDigits {
    public static int sumDigits(int num, int sum) {
        // Base case: when num becomes 0, return the sum
        if (num == 0) {
            return sum;
        }
        // Extract last digit and add to sum
        int digit = num % 10;
        sum += digit;
        return sumDigits(num / 10, sum);
    }
    public static void main(String[] args) {
        int num = 1234;
        int result = sumDigits(num, 0);
        System.out.println("Original number: " + num);
        System.out.println("Sum of digits: " + result);
    }
}
