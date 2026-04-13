public class PalindromeCheck {
    public static void main(String[] args) {
        String str = "madam"; // You can change this to test other strings
        String rev = "";
        // Reverse the string
        for (int i = str.length() - 1; i >= 0; i--) {
            rev += str.charAt(i);
        }
        // Check if original and reversed strings are equal
        if (str.equals(rev)) {
            System.out.println(str + " is a palindrome.");
        } else {
            System.out.println(str + " is not a palindrome.");
        }
    }
}