#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter value of A: ");
    scanf("%d",&a);
    printf("Enter value of B: ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("Value of A and B are now, %d and %d",a,b);
}