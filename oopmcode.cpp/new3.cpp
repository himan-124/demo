//copy of an object (shallow object)
#include <iostream>
using namespace std;
class Demo{
    public:
    int x;
    float *y;
    Demo(){
        y=new float;
    }
    void Display(){
        cout << "x=" << x << "y=" << y << endl;
    }
};
int main(){
    Demo d;
    d.x=10;
    *(d.y)=2.5f;
    Demo d2=d;
    d.Display();
    d2.Display();

}
