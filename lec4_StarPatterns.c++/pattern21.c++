#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 21 :
    let n = 4
    *   *   *   *
        *   *   *
            *   *
                *

    */



//  NOTE THAT, HERE "NEED"  TO PRINT SPACES..... 

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        
    // TO PRINT SPACES 
    int spaces = i - 1 ;
    while(spaces > 0) {
        cout << " " << "\t" ;
        spaces-- ;
    }

    // TO PRINT STARS 
    int j = 1 ; 
    while(j <= n - i + 1) {
    cout << "*" << "\t" ;
    j++ ; 
    }

    cout << endl ; 
    i++ ;
    }
}