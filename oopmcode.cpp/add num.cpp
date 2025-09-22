//Addition of a number 
#include<iostream>
using namespace std;
int add(int a, int b)
{
    cout << "int version\n";
    return a+b;

}
float add(int a, int b)
{
    cout << "float version 1\n";
    return a+b;
}
float add(float a,int b)
{
    cout << "float version 2\n";
    return a+b;

}
double add(double a,double b)
{
    cout << "double version 1\n";
    return a+b;
}
int main()
{
    add(3,4);

    cout << "ADDITION: " << add (56,78);
}