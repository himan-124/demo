/*#include<iostream>
using namespace std;
class Demo{
    public:
    int x;
    float *y;
    Demo(){
        y= int (5);
        x=10;

    }
    Demo(const Demo &d){
        x=d.x;
        y= int;
        *y=*(d.y);


    }
    ~Demo(){
        free(y);
    }
    void Display(){
        cout << "x=" << x  << endl;
        cout << "y=" << *y << endl;
    }
};
int main(){
    Demo d1;
    Demo d2=d1;
    d1.Display();
    d2.Display();
    *(d2.y)=50;
    d1.Display();
    d2.Display();
    

}*/
#include<iostream>
using namespace std;

class Demo {
public:
    int x;
    float *y;

    Demo() {
        y = new float(5); // allocate and initialize
        x = 10;
    }

    Demo(const Demo &d) {
        x = d.x;
        y = new float;
        *y = *(d.y);
    }

    ~Demo() {
        delete y;
    }

    void Display() {
        cout << "x=" << x << endl;
        cout << "y=" << *y << endl;
    }
};

int main() {
    Demo d1;
    Demo d2 = d1;
    d1.Display();
    d2.Display();
    *(d2.y) = 50;
    d1.Display();
    d2.Display();
}
