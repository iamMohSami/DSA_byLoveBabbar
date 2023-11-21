#include<stdio.h> 
int main() {
    int n ; 
    printf("Enter the number you want to check for Prime : ") ; 
    scanf("%d" , &n) ;
    int isPrime = 1 ; 

    for(int i = 2 ; i<n ; i++) {
        if(n%2==0) {
            isPrime = 0 ;
            break;
        }
    }
    
    if(isPrime == 0 ) {
        printf("The Number %d is NOT PRIME " , n) ;
    }
    else{
        printf("The Number %d is PRIME " , n) ;
    }

    return 0 ;
}