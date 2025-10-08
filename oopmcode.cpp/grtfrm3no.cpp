#include<iostream>
using namespace std;
int largest(int x,int y,int z)
{
    if (x>y && x>z)
    {
        return x;
    } else if(x<y && y>z)
    {
        return y;
    } else {
        return z;
    }
}
//overloaded function
int largest(int x,int y)
{
    if(x>y) return x;
    else return y;
}
int main()
{
    int a=17,b=8,c=10;
    cout << "The Largest Number Among 3 Is " 
    << largest(a,b,c) end1 ;
    cout << "The Largest Number Among 2 Is "
    << largest(b,c) end2 ; 
}
/*#include<stdio.h>
 int sum(float b,float a){
    int c=a+b;
    return c;
    
 }

int main(){
    float a,b,result;
    
    printf("Enter number for a : ");
    scanf("%f",&a);
 
    printf("Enter number for b : ");
    scanf("%f",&b);
    result=sum(b,a);
    printf("result is : %f\n",result);
    return 0;
}*/