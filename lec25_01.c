//write a code to best time to buy and sell stocks to maximize profit and print best time sell stock
#include <stdio.h>
int main() {
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);     //calculating size of array
    int minprice=arr[0];     
    int maxprofit=0;     
    int buyday=0;   //variable to store the day to buy stock
    int sellday=0;  //variable to store the day to sell stock
    for (int i=1;i<n;i++){       //traversing the array
        if (arr[i]<minprice){
            minprice=arr[i];      //updating minimum price
            buyday=i;             //updating buy day
        } else if (arr[i]-minprice>maxprofit){     //if current profit is greater than maximum profit
            maxprofit=arr[i]-minprice;    //updating maximum profit
            sellday=i;                    //updating sell day
        }
    }
    printf("Maximum profit is : %d\n",maxprofit);     
    printf("Buy on day: %d\n", buyday + 1);
    printf("Sell on day: %d\n", sellday + 1);
    return 0;    
}
