/*#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b;
    char o;
    if(scanf("%d %d %c",&a,&b,0)!=3){
        return 1;
        
    }
    switch (o) {
            
        case '+':
            printf("%d\n",a+b);
            break;
            
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            if (b==0){
                printf("INF\n");
            
            } else{
                printf("%d\n",a/b);
                
            }
            break;
        case '%':
            if (b==0){
                printf("INF\n");
                
            } else {
                printf("%d\n",a%b);
                
            }
            break;
        default :
            printf("NA\n");
            break;
            
    }
     Enter your code here. Read input from STDIN. Print output to STDOUT */
    /*return 0;
}
#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("%");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if (n1 > n2 && n1 > n3) {
        printf("%d\n",n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("%d\n",n2);
    } else {
        printf("%d\n",n3);
    }
    //Enter your code here. Read input from STDIN. Print output to STDOUT 
    return 0;
}*/


//Addition of a number 

/*#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x=25;
    int y=50;
    swap(x,y);
    cout << x << " " << y ;
}*/



/*Find the maximum and minimum element in an array in c
#include <stdio.h>
int main()
{
    int n, i;
    int max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    return 0;
}

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int min;
    int max;
    max = arr[0];
    // min= arr[0];
    for (int i=0;i<5;i++){
        if (arr[i]>max){
            max=arr[i];

        } 
        else if (arr[i]<min){
            min=arr[i];

        }
       
       
    }
    printf("MAXIMUM NUMBER IN ARRAY : %d\n",max);
    printf("MINIMUM NUMBER IN ARRAY : %d",min);


#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {//here we using loop to now the position an size of element
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    printf("Reversed array ia : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


//find the "Kth" maximum and minimum element of an array which is given "Kth"


#include <stdio.h>
#include <stdlib.h>//it is required for qsort function
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 1;
    }
    qsort(arr, n, sizeof(int), compare);
    printf("The %dth smallest element is %d\n", k, arr[k - 1]);
    printf("The %dth largest element is %d\n", k, arr[n - k]);
    return 0;
}
//output
//Enter the number of elements in the array: 5
//Enter the elements of the array: 3 1 4 5 2
//Enter the value of k: 2
//The 2th smallest element is 2
//The 2th largest element is 4


//sort an array of 0s,1s and 2s(dutch national flag problem)
#include <stdio.h>
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                // Swap arr[low] and arr[mid]
                {
                    int temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                }
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                // Swap arr[mid] and arr[high]
                {
                    int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                }
                high--;
                break;
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort012(arr, n);
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

//output
//Enter the number of elements in the array: 7
//Enter the elements of the array: 0 1 2 0 1 2 0
//Sorted array is: 0 0 0 1 1 2 2
*/
//move all negative numbers to beginning and positive to end with constant space
#include <stdio.h>
void rearrange(int arr[], int n) {
    int j = 0; // index of the next negative element
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    rearrange(arr, n);
    printf("Rearranged array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}



//output
//Enter the number of elements in the array: 8
//Enter the elements of the array: 1 -2 3 -4 5 -6 7 -8
//Rearranged array is: -2 -4 -6 -8 5 3 7 1


