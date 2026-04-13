import java.util.*;
public class hello4 {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        
        ListIterator<Integer>it =list.listIterator();
        while (it.hasNext()){
            Integer x=it.next();
            if(x==4){
                it.add(3);
           
                it.add(2);
            
                it.add(1);
            }
            }
            System.out.print(list);
        }
    }
