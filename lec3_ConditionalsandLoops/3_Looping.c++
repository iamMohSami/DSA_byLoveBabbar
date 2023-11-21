#include<iostream> 
using namespace std ; 

// LOOPS : FOR , WHILE , DO-WHILE , SWITCH 

int main() {
    // Print upto N numbers 

    int N ;
    cout << "Enter a number N :" ;
    cin >> N ; 
    int i = 0 ;

    while(i <= N) { 
        cout << i << "\t" ;
        i++ ;
    }
    cout << endl ;
    // Print SUM upto N numbers 

    int M  ;
    cout << "Enter a number M :" ;
    cin >> M ; 
    int sum = 0 ;
    int j =0 ;
    while(j<=M) {
        sum += j ;
        j++ ;
    }
    cout << "The Total Sum upto " << M << " is : " << sum ; 
    cout << endl ;
    // IS PRIME OR NOT ??
    int X ; 
    cout << "Enter the number you want to check for Prime : " ;
    cin >> X ;

    int k = 2 ; 
    while(k < X) {
        if( X % k == 0 ) {
            cout << "Prime for " << k << endl ;
        }
        else {
            cout << "Not Prime for " << k << endl ;
        }
        k++ ;
    }
    
    }