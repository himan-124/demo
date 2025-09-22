<<<<<<< HEAD
//program to find the maximum sum of a subarry in an array .
#include <stdio.h>
int main()
{
    int arr[5] = {2, 3, -4, 6, -7};
    int k = 5; 
    int max =0;
    for (int i = 0; i < k; i++)
    {
        
        int sum = 0; 
        for (int j = i; j < k; j++)
        {   
            sum = 0;
            sum = sum + arr[j];
            if (sum > max)
            {
                max = sum;
            }
        }
    }

    printf("maximum num : %d", max);
    return 0;
    
=======
//program to find the maximum sum of a subarry in an array .
#include <stdio.h>
int main()
{
    int arr[5] = {2, 3, -4, 6, -7};
    int k = 5; 
    int max =0;
    for (int i = 0; i < k; i++)
    {
        
        int sum = 0; 
        for (int j = i; j < k; j++)
        {   
            sum = 0;
            sum = sum + arr[j];
            if (sum > max)
            {
                max = sum;
            }
        }
    }

    printf("maximum num : %d", max);
    return 0;
    
>>>>>>> eb207c606dedfca3e78d62b1dfcf3c223b3614fc
}