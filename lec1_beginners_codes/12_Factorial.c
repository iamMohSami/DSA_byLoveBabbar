#include <stdio.h>
int main()
{
    int n;
    int temp = 1;
    printf("Enter The Number : ");
    scanf("%d", &n);
    int num = n;
    if (n == 0 || n == 1)
    {
        printf("The Factorial of %d! : 1", n);
    }
    if (n < 0)
    {
        printf("The Factorial of NEGATIVE number DOESNT EXIST");
    }
    else
    {
        while (num != 0)
        {
            temp *= num;
            num--;
        }
        printf("The Factorial of %d! : %d", n, temp);
    }
}