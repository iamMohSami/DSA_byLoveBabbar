#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 17 :
    let n = 3
    A      
    B   C
    C   D   E   
    */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    while(i<=n) {
        char ch = 'A' + i - 1  ;
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