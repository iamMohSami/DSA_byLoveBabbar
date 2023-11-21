#include<stdio.h> 
int main() {
    int n ; 
    printf("Enter the Number of Terms you want : ") ;
    scanf("%d" , &n) ; 
    int a = 0 ; 
    int b = 1 ; 
    printf("%d\t%d", a,b) ;
    for(int i = 2 ; i< n ; i++) {
        int c = a + b ; 
        printf("\t%d" , c) ; 
        a=b ;
        b=c ;
    }
    return 0;  
}