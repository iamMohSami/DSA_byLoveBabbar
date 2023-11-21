#include <iostream>
using namespace std;

int main()
{
    /*

    DABANGGG PATTERN || BOSS FIGHT || THE THANOS

    PATTERN 27 :
    let n = 5
    1   2   3   4   5   5   4   3   2   1
    1   2   3   4   *   *   4   3   2   1
    1   2   3   *   *   *   *   3   2   1
    1   2   *   *   *   *   *   *   2   1
    1   *   *   *   *   *   *   *   *   1
    */

    //  NOTE THAT, HERE WE HAVE 3 SECTIONS 
    // 1. FIRST TRIANGLE OF NUMBERS FROM MIDDLE TO LEFT
    // 2. 2ND TRIANGLE OF "*" IN MIDDLE
    // 3. 3RD TRIANGLE FROM MIDDLE COLUMN TO RIGHT SIDE 

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    int k = n ; 
    while(i <= n) {
        
        //Lets print the first triangle 
        int j = 1 ; 
        while(j <= n - i + 1 ) {
            cout << j << "\t" ;
            j++ ;
        }

        //Lets print the middle "*" triangle 
        int d = 1 ;
        while(d <= (i-1)*2 ) { 
            cout << "*" << "\t" ;
            k++ ;
            d++;
        }

       //Lets print the third triangle 
       int x = n - i + 1 ; 
       while ( x > 0) {
        cout << x << "\t" ;
        x-- ;
       }


        cout << endl ;
        i++ ;
        k-- ;
    }
}