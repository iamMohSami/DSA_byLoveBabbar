#include <stdio.h>
int main()
{
    int n ;
    printf("Enter a Number : ") ;
    scanf("%d" , &n) ; 

    if(n%2 == 0) {
        printf("The Number %d is EVEN Number..!!" , n) ;
    }
    else{
        printf("The Number %d is ODD Number..!!" , n) ;
    }


return 0 ;
}