//copy of an object (shallow object)
#include <iostream>
using namespace std;
class Demo{
    public:
    int x;
    float y;
    void Display(){
        cout << "x=" << x << "y=" << y << endl;
    }
};
int main(){
    Demo d;
    d.x=10;
    d.y=3.5;
    Demo d2=d;
    d.Display();
    d2.Display();

}
