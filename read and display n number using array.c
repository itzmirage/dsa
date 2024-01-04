#include <stdio.h>

int main()
{
    int i,arr[4];
    for (i=0;i<4;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Your array is : [");
    for (i=0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]");

}