import java.util.HashMap;
class hashmap1{
    public static void main (String [] args){
        String str = "abdcbaba";
        HashMap<Character,Integer>map=new HashMap<>();
        for (char ch : str.toCharArray()){
            map.put(ch,map.getOrDefault(ch , 0)+1);
        }
        for (char ch :str.toCharArray()){
            if (map.get(ch)==1){
                System.out.println(ch);
                break;
            }
        }
    }

}
