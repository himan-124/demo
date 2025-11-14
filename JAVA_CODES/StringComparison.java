public class StringComparison {
    public static void main(String[] args) {
        String s1 = "Java";
        String s2 = "java";

        // Case-sensitive comparison
        System.out.println("Using equals(): " + s1.equals(s2)); // false

        // Case-insensitive comparison
        System.out.println("Using equalsIgnoreCase(): " + s1.equalsIgnoreCase(s2)); // true

        // Lexicographical comparison (based on Unicode values)
        System.out.println("Using compareTo(): " + s1.compareTo(s2)); // Negative value because 'J' < 'j'
    }
}