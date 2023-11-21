#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 16 :
    let n = 3
    A      
    B   C
    D   E   F   
    */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    char ch = 'A' ;
    while(i<=n) {
        int j = 1 ; 
        while(j<=i) {
            cout << ch << "\t" ;
            j++ ;
            ch ++ ;
        } 
        cout << endl ;
    i++ ;
    }
}