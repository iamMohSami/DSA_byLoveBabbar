#include <stdio.h>
int main()
{
    int N;
    printf("Enter the End Number : ");
    scanf("%d", &N);

    int num1 = 0;
    int num2=0 ;
    printf("\n\nThe EVEN Numbers are : \n ");
    while (num1 != N + 1)
    {
        if (num1 % 2 == 0)
        {
            printf("%d\t", num1);
        }
        num1++;
    }
    printf("\n\nThe ODD Numbers are : \n ");
    while (num2 != N + 1)
    {
        if (num2 % 2 != 0)
        {
            printf("%d\t", num2);
        }
        num2++;
    }
} 