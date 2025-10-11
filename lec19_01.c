/*write a program for 
3 2 1
6 5 4 
9 8 7  */
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
        for(j=2;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}