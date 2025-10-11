//dynamic memory allocator in c++
#include <iostream>
using namespace std;
class Demo{
    public:
    string name_;
    Demo(string name)
    {
        name_ = name;
        cout <<  name_<<"created\n" ;
    }

    ~Demo()
    {
        cout << name_ <<" destroyed\n";
    }
 };
int main()
{
    Demo obj1("static object 1");
    Demo obj3("static object 2");
    Demo *obj2 = new Demo("dynamic object 1");
    delete obj2; //deallocating memory
    return 0;
}
/*
OUTPUT:
static object 1created
static object 2created
dynamic object 1created
dynamic object 1 destroyed
static object 2 destroyed
static object 1 destroyed
*/

