 // Recursive function to count digits
public class CountDigits {
    public static int cntDig(int num) {
        // Base case: when num becomes 0, return 0
        if (num == 0) {
            return 0;
        }
        // Recursive case: strip one digit and add 1
        return 1 + cntDig(num / 10);
    }

    public static void main(String[] args) {
        int num = 12345;
        int result = cntDig(num);
        System.out.println("Original number: " + num);
        System.out.println("Number of digits: " + result);
    }
}
