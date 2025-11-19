//write a program to print the pattern using the array elements like 
//  1 2 3
//  4   6
//  7 8 9
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the elements of the array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The pattern is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==1 && j==1)
            {
                printf("  ");
            }
            else
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
