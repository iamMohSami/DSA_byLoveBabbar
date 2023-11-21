#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 14 :
    let n = 3
    A   B   C   
    B   C   D
    C   D   E
    */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;

    while(i<=n) {
        int j = 1 ;
        char ch = 'A' + i - 1 ;
        while(j<=n) {
            cout << ch << "\t" ;
            ch++ ;
            j++ ;
        }
        cout << endl ;
        i++ ;
    }



}