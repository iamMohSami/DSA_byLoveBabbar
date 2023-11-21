#include <stdio.h>
int main()
{
    int N;
    printf("Enter the End Number : ");
    scanf("%d", &N);

    int num = 0;

    while (num != N + 1)
    {
        printf("%d \t", num);
        num++ ;
    }
}