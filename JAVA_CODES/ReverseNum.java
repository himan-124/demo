// Recursive function to reverse a number
public class ReverseNum {
    public static int reverse(int num, int rev) {
        // Base case: when num becomes 0, return the reversed number
        if (num == 0) {
            return rev;
        }
        // Extract last digit for generating reversed number
        int digit = num % 10;
        rev = rev * 10 + digit;
        return reverse(num / 10, rev);
    }
    public static void main(String[] args) {
        int num = 12345;
        int result = reverse(num, 0);
        System.out.println("Original number: " + num);
        System.out.println("Reversed number: " + result);
    }
}
