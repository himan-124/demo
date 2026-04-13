//Count vowels in a string
public class VowelCounter {
    public static void main(String[] args) {
        String input = "Himanshu Kumar";
        int count = 0;
        for (char c : input.toLowerCase().toCharArray()) {
            if ("aeiou".indexOf(c) != -1) {
                count++;
            }
        }
        System.out.println("Vowels: " + count);
    }
}