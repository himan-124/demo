import java.util.*;
public class hello3 {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(5);
        list.add(6);
        list.add(7);

        list.add(8);
        ListIterator<Integer>it =list.listIterator();
        while (it.hasNext()){
            Integer x=it.next();
            if(x==7){
                it.add(10);
                //it.set(10);
            }
        }
    System.out.print(list);}}
