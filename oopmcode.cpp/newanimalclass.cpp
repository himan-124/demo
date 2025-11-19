#include <iostream>
using namespace std;

class Animal {
public:
    Animal(){
        cout<<"Animal class created \n";
    }
    
    virtual void makesound() {
        cout << "Animal makes sound\n";
    }
    ~Animal(){
        cout<<"Animal Destroyed\n";
    }
};

class Dog : public Animal {
public:
    Dog(){
        cout<<"Dog class created\n";
    }
    void makesound() override {
        cout << "Bhauuubhaauuu!!!!\n";
    }
    ~Dog (){
        cout<<"Dog Destroyed\n";
    }
};

class Cat : public Animal {
public:
    Cat (){
        cout<<"Cat class created\n";
    }
    void makesound() override {
        cout << "meooowwwwwmeooowwwww!!!!!!\n";
    }
     ~Cat (){
        cout<<"Cat Destroyed\n";
    }
};

int main() {
   Animal *a=new Dog ();
   delete a;
 
   //Cat b;
    return 0;
}