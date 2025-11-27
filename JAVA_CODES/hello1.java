import java.util.ArrayList;
import java.util.Collections;

class Student implements Comparable<Student> {
    String name;
    int RollN;

    public Student(String name, int RollN) {
        this.name = name;
        this.RollN = RollN;
    }

    @Override
    public int compareTo(Student s1) {
        return this.RollN - s1.RollN;
    }

    @Override
    public String toString() {
        return this.name + " " + this.RollN;
    }
}

public class hello1 {
    public static void main(String[] args) {
        ArrayList<Student> list = new ArrayList<>();
        list.add(new Student("om", 1));
        list.add(new Student("ankit", 2));

        Collections.sort(list);
        System.out.println(list);
    }
}