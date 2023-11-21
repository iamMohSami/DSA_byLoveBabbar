#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 19 :
    let n = 4
                *
            *   *
        *   *   *
    *   *   *   *
    */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    while(i<=n) {
        //LETS PRINT SPACE
        int space = n - i ;
        while(space>=0) {
            cout << " " << "\t" ;
            space-- ;
        }

        //LETS PRINT STARS
        int j = 1 ; 
        while(j<=i) {
            cout << "*" << "\t" ;
            j++ ;
        } 
        cout << endl ;
    i++ ;
    }
}