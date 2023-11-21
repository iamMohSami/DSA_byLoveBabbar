#include<iostream>
using namespace std ; 


int main() {
    //  Question 1 
    // I expected the output : 0 1 2 3 4 5
    // Correct Output : 0 2 4
    // Here, the value of i is getting incremented twice, once in loop incremenation and then i++
    // so , 1 and 3 gets missed here
    for(int i = 0 ; i<=5 ; i++) {
        cout << i << " " ;
        i++ ;
    }
    cout << endl ;
    // Question 2
    // OUTPUT : infinte Zeros  0    0   0   0   0   0   0  0   0...........
    for(int i = 0 ; i<=5 ; i--) {
        // cout << i << " " ;
        i++ ;
    }
    // Question 3 
    // OUTPUT : 0   3   5   7   9   11  13  15
    for(int i=0 ; i<=15 ; i+=2){
        cout << i << " " ;
        if(i&1) { // i&1 checks whether the number is an ODD number using BITWISE AND Operation
            continue ;
        } 
        i++ ;
    }
    /*  Explananation : 
    First; i =0 ; prints "0" ; as 0 is not ODD ; IF not gets executed; i++ == i=1 ; Now i=i+2 ; {i=3}
    now, i = 3 ; prints "3" ; as 3 is ODD ;IF gets executed ; CONTINUE ; i++ is SKIPPED ; {i=5}
    similarly prints "5 7 9 11 13 15"..... */


    // Question 4
    // OUTPUT : 0 (6 times) , 1 (5 times) , 2 (4 times) ..........
    for(int i = 0 ;i <5 ; i++) {
        for(int j = i ; j<=5 ; j++) {
            cout << i << " " <<endl ;
        }
    }

    // Question 5 
    // OUTPUT : nice...
    for (int i= 0 ; i<5 ; i++) {
        for (int j = 1 ; j<= 5 ; j++) {
            if(i+j==10) {
                break;
            }
            cout << i << " " << j << endl ;
        }
    }


return 0 ;
}