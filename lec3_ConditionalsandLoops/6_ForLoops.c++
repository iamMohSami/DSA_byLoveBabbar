#include<iostream>
using namespace std ;

int main() {
    // FOR LOOP TO PRINT 1 TO N AND ITS COUNT

    int n ;
    int sum = 0 ;
    cout << "Enter The Value of n : " ; 
    cin >> n ; 

    for(int i = 1 ; i<=n ; i++) {
        cout << i << "\t" ;
        sum = sum + i ;
    }

    cout << "\n" ; 
    cout << "The Sum upto " << n << " numbers is : " << sum << endl ; 


    // FOR loop Without using any Intialisation/Condition and Incrementation 
    // BREAK = used to exit the Loop 
    int m  ;
    int nsum = 0 ;
    cout << "Enter The Value of m : " ; 
    cin >> m  ; 
    int j = 1 ;
    for(; ; ) {
        if(j<=n) {
            cout << j << "\t" ; 
        }
        else {
             break ; //without this, the loop doent know when to stop and will get stuck in a infinite 
        }            // loop printing garbage values, so using "break" is imp 
        j++ ;
    }

    // FIBONACCI SERIES UPTO N 
    // FIBONACCI SERIES : 0 1 1 2 3 5 8 13 21 34 ......

    int p ; 
    cout << "\nEnter the number of terms for fibonacci series : " ; 
    cin >> p ; 
    if(p <= 0) {
        cout << "Enter a Positive Non-Zero Number" << endl ;
    }
    if(p==1) { 
        cout << 0 << endl ;
    }
    if(p==2) {
        cout << 1 << endl ;
    }
    else { 
        int a = 0 ; 
        cout << a << "\t" ; 
        int b = 1 ; 
        cout << b << "\t" ; 
        for(int i = 2 ; i< p ; i++) {
            int c = a + b ; 
            cout << c << "\t" ; 
            a=b ;
            b=c ;
        }
    }

    // ALSO CHECK PRIME NUMBER CODE 
    return 0 ;
}