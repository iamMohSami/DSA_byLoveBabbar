#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 15 :
    let n = 3
    A      
    B   B
    C   C   C   
    */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;

    while(i<=n) {
        int j = 1 ; 
        char ch = 'A' + i - 1 ;
        while(j<=i) {
            cout << ch << "\t" ;
            j++ ;
        } 
        cout << endl ;
    i++ ;
    }
}