//User se ek number lo, aur check karo wo number array me hai ya nahi.
import java.util.Scanner;
public class LinearSearch {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.print("Enter size of array: ");
int n = sc.nextInt();
int[] arr = new int[n];
System.out.println("Enter elements:");
for (int i = 0; i < n; i++) {
arr[i] = sc.nextInt();
}
System.out.print("Enter number to search: ");
int x = sc.nextInt();
boolean found = false;
for (int val : arr) {
if (val == x) {
found = true;
break;
}
}
if (found)
System.out.println(x + " is present in the array.");
else
System.out.println(x + " is not present in the array.");
}
}