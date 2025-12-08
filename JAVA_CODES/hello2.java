import java.util.*;
public class hello2 {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(5);
        list.add(6);
        list.add(7);
        list.add(8);

        Iterator<Integer> it = list.iterator();
        while (it.hasNext()) {
            int currentElement = it.next(); // Store the current element
            //System.out.println(currentElement);
            if (currentElement == 6) { // Use '==' for comparison
                it.remove();
            }
}
System.out.println(list);
}
}