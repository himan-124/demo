//define destructor for class
//destructor is a special function that is provided to us by c++.
//It dealocates the memory which was allocated by the constructor to an object .
//we do not have to call the destructor explicitly  ever.
#include <iostream>
using namespace std;
class Demo{
    public:
    int data;
    Demo() //constructor
    {
        cout << "Constructor called" << endl;
        data = 0;
    }


    ~Demo() //destructor
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    Demo obj1; //constructor called
   // cout << "Data : " << obj1.data << endl;
    return 0;
}
   
