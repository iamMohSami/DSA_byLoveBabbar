#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the Number a : ");
    scanf("%d", &a);
    printf("\nEnter the Number b : ");
    scanf("%d", &b);

    // To Compare, we use IF CONDITION ;
    if (a > b)
    {
        printf("Number a is Greater i.e. %d > %d ", a, b);
    }
    else
    {
        printf("Number b is Greater i.e. %d > %d ", b, a);
    }

    return 0;
}