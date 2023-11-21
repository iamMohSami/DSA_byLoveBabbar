#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 13 :
    let n = 3
    A   B   C   
    D   E   F
    G   H   I
    */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    char ch = 'A' ;
    while(i<=n) { 
        int j = 1 ; 
        while(j<=n) { 
            cout << ch << "\t" ;
            ch++ ;
            j++ ;
        }
    cout << endl ;
        i++ ; 
    }

}