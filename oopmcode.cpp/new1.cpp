#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() = 0; 
};

class square : public shape {
public:
    void draw() {
        cout << "square drawn\n";
    }
};

class circle : public shape {
public:
    void draw() {
        cout << "circle drawn\n";
    }
};

int main() {
   // shape s;  //an abstract in c++ can be cretated by making atleast 1 pure virtual function in it , line 6 is pure virtual function 
    //an abstract class can not be instantiative we can not make an object on it .
    //square sq // any class that inherits must impliments all the pure virtual functions of that object class, otherwise this derived class will also become an abstract class 
    shape* s1 = new square();
    shape* s2 = new circle();

    s1->draw(); 
    s2->draw();  

   // delete s1;
   //delete s2;

    return 0;
}