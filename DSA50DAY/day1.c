//Find the maximum and minimum element in an array 
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

//output
//Enter the number of elements in the array: 5
//Enter the elements of the array: 3 5 1 8 2
//Maximum element is 8
//Minimum element is 1