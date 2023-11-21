#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 22 :
    let n = 4
    1   1   1   1
        2   2   2
            3   3
                4

    */



//  NOTE THAT, HERE "NEED"  TO PRINT SPACES..... 

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;

    while (i <= n) {
        //lets print space first 
        int spaces = i - 1 ; 
        while(spaces > 0 ) { 
            cout << " " << "\t" ;
            spaces-- ;
        }
        //lets print numbers now 
        int j = 1 ;
        while(j <= n - i + 1) {
            cout << i << "\t" ;
            j++ ;
        }
    cout << endl ;
    i++ ;
    }
}