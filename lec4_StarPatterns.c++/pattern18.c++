#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 18 :
    let n = 4
    D  
    C   D
    B   C   D
    A   B   C   D
    */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    while(i<=n) {
        char ch = 'A' + n - i  ;
        int j = 1 ; 
        while(j<=i) {
            cout << ch << "\t" ;
            j++ ;
            ch++ ;
        } 
        cout << endl ;
    i++ ;
    }
}