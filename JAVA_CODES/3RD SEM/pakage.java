import java.util.HashMap;

class Main {
    public static void Main (String[] args){
        HashMap<Integer , Integer>Map=new HashMap<>();
        int arr[]={2,7,11,15};
        int target=9;
        for (int i=0;i<arr.length;i++){
            int diff=target-arr[i];
            if (map.containskey(diff)){
                System.out.println(map.get(diff)+" "+i);
                break;
            }
            map.put(arr[i],i);

        }
        }
    }
