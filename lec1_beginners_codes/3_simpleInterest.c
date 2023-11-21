#include<stdio.h>
int main() {
// Simple Interest = (P * R * T) / 100  i.e Principal * Interest Rate * Time
int P , R , T , result ;
printf("Enter the value of Principal (P) :") ;
scanf("%d" , &P) ;
printf("\nEnter the value of Interest Rate (R) :") ;
scanf("%d" , &R) ;
printf("\nEnter the value of Time (T) :") ;
scanf("%d" , &T) ;
result = (P*R*T) / 100 ;
printf("\nThus, The Simple Interest : %d%% per annum" , result ) ;
// Note that, here to print the "%" sign in the printf line, we used it 2 times "%%" as a escape sequence
}