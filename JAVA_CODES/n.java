//Q2: Interface Variable (public static final)
//Code:
interface A {
    String getCity();
    void setCity(String city);
}
class CityImpl implements A {
    private String city = "Bhopal";

    @Override
    public String getCity() {
        return city;
    }

    @Override
    public void setCity(String city) {
        this.city = city;
    }
}
public class n {
    public static void main(String[] args) {
        A obj = new CityImpl();
        System.out.println(obj.getCity()); 
        obj.setCity("Indore");         
        System.out.println(obj.getCity()); 
    }
}