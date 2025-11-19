//write a program to buy and sell stocks to maximize profit
#include <stdio.h>
int main() {
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);     //calculating size of array
    int minprice=arr[0];     
    int maxprofit=0;     
    for (int i=1;i<n;i++){       //traversing the array
        if (arr[i]<minprice){
            minprice=arr[i];      //updating minimum price
        } else if (arr[i]-minprice>maxprofit){     //if current profit is greater than maximum profit
            maxprofit=arr[i]-minprice;    //updating maximum profit
        }
    }
    printf("Maximum profit is : %d",maxprofit);     
    return 0;    
}


//output
//Maximum profit is : 5