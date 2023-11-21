#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 26 :
    let n = 4
                1
            1   2   1
        1   2   3   2   1
    1   2   3   4   3   2   1
    */

    //  NOTE THAT, HERE WE HAVE 3 SECTIONS 
    // 1. FIRST TRIANGLE OF SPACES " " 
    // 2. 2ND TRIANGLE FROM MIDDLE COLUMN TO LEFT SIDE 
    // 3. 3RD TRIANGLE FROM MIDDLE COLUMN TO RIGHT SIDE {Remember there are no spaces in this triangle part}

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    while(i <= n) {
            // LETS PRINT THE SPACES FIRST  
            int spaces = n -i ; 
            while(spaces > 0) {
                cout << " " << "\t"  ;
                spaces-- ;
            }

            //  LETS PRINT THE 2ND TRIANGLE 
            int j = 1 ;
            while(j<= i) {
                cout << j << "\t" ;
                j++ ;
            }

             //  LETS PRINT THE 3ND TRIANGLE 
             int k = i-1 ;
             while(k>0) {
                cout << k << "\t" ;
                k-- ;
             } 
        cout << endl ;
        i++ ;
    }
}