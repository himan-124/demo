/*#include <iostream>
using namespace std;
class Animal{
    public:
    virtual void makesound(){
        cout <<"Animal makes sound\n";

    }
};
class Dog:public Animal {
    public:
    void makesound (){
        cout <<"Bhauuubhaauuu!!!!\n";
    }
};
class Cat: public Animal {
    public:
    void makesound (){
        cout<<"meooowwwwwmeooowwwww!!!!!!\n";
    }
};
int main (){
    Animmal*a=new Animal[4];
    a[0]=new Dog;
    a[1]=new Cat;
    a[2]=new Dog;
    a[4]=new Cat;

}*/
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makesound() {
        cout << "Animal makes sound\n";
    }
};

class Dog : public Animal {
public:
    void makesound() override {
        cout << "Bhauuubhaauuu!!!!\n";
    }
};

class Cat : public Animal {
public:
    void makesound() override {
        cout << "meooowwwwwmeooowwwww!!!!!!\n";
    }
};

int main() {
    Animal* a[4];
    a[0] = new Dog;
    a[1] = new Cat;
    a[2] = new Dog;
    a[3] = new Cat;

    for (int i = 0; i < 4;i++) {
        a[i]->makesound();
        //delete a[i]; 
    }

    return 0;
}// due to dynamic polymorphism we can accomodate objects of various type into a single place if they belong to the same parent 