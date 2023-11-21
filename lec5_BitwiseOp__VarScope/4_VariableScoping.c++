#include<iostream>
using namespace std ; 

int main() {
    int a  ;
    cout << a << endl ; // a is not intialised, prints a Garbage Value

    int b = 63 ; 
    cout << b << endl ;

    if(true) {
        int c = 61 ;
        cout << c << endl ;
        cout << b << endl ;
    }
    // cout << c << endl ;  will give an ERROR, as c is valid only in if condition and not in full scope
    if(true) {
        int c = 48 ;  // same variable name, different scope NO PROBLEM
        cout << c << endl ;
    }

    // READ ABOUT OPERATOR PRECEDENCES

    return 0 ;
}