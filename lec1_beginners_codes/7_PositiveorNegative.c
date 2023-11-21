#include <stdio.h>
int main()
{
    int n ;
    printf("Enter a Number : ") ;
    scanf("%d" , &n) ; 

    if(n > 0) {
        printf("The Number %d is POSITIVE Number..!!" , n) ;
    }
    else{
        printf("The Number %d is NEGATIVE Number..!!" , n) ;
    }


return 0 ;
}