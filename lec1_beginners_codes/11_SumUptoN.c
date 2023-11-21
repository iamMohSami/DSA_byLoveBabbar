#include <stdio.h>
int main()
{
    int N;
    printf("Enter the End Number : ");
    scanf("%d", &N);
    int sum = 0 ;
    int number = 0 ;
    while(number != N+1) {
        sum += number ;
        number++ ;
    }
    printf("The Total Sum upto %d is : %d" , N , sum) ;
}