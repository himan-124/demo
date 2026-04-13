//Reverse a String manually:
public class ReverseString {
    public static void main(String[] args) {
        String s = "DingDongDingDongDingDing";

        // Using StringBuilder for efficient reversal
        StringBuilder rev = new StringBuilder();

        // Append characters in reverse order
        for (int i = s.length() - 1; i >= 0; i--) {
            rev.append(s.charAt(i));
        }

        // Output the reversed string
        System.out.println("Reversed string: " + rev.toString()); // Output: gnidoC
    }
}