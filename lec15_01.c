//write a  to print elements of array in ascending order using sorting
#include<stdio.h>
int main()
{
    int arr[5]={2,4,1,6,5};
    int k=5;
    for (int i=0;i<k-1;i++)
    {
        for (int j=i+1;j<k;j++)
        {
            if (arr[i]>arr[j])
            {
                int new =arr[i];
                arr[i]=arr[j];
                arr[j]=new;

            }
        }

    }
    for (int i=0;i<k;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}

