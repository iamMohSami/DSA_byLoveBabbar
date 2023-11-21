#include<stdio.h>
int main() {
int N ;


printf("Enter the total Number of Input numbers :  ") ;
scanf("%d" , &N) ; 
int arr[N] ;

printf("\nEnter the Numbers : ") ;
//Storing these numbrs in the array 
for(int i = 0 ; i<N ; i++) {
    scanf("%d" , &arr[i]) ;
} 

//Printing those Numbers 
printf("\nThese are the given Input Numbers : ") ;
for(int i=0 ; i<N ;i++) {
    printf("%d\t" , arr[i]) ;
}

//To find the total AVearge = sum/N ; 

//Finding the sum : 
int sum = 0 ; 
for(int i =0 ; i<N ; i++) {
    sum += arr[i] ;
}
 
printf("\nThe Overall Sum : %d \n" , sum) ;
int avg = sum / N ;
printf("The Total AVERAGE : %d", avg) ;

}