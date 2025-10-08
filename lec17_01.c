/*write a program to print elements in a patterns like 
  1 2 3
    5
  7 8 9   */
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
            if(i==1 && j==0 || i==1 && j==2)
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

    
    