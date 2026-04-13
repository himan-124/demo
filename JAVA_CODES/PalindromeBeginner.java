import java.util.Scanner;

public class PalindromeBeginner {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a word: ");
        String word = sc.nextLine();   // take input

        int i = 0;                     // start index
        int j = word.length() - 1;     // end index
        boolean isPalindrome = true;   // assume true

        // check characters from both ends
        while (i < j) {
            if (word.charAt(i) != word.charAt(j)) {
                isPalindrome = false;  // mismatch found
                break;
            }
            i++;
            j--;
        }

        // print result
        if (isPalindrome) {
            System.out.println("Palindrome!");
        } else {
            System.out.println("Not a palindrome!");
        }

        sc.close();
    }
}