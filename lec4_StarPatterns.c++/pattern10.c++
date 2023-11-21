#include <iostream>
using namespace std;

int main() {

/* 
PATTERN 10 : 
let n = 4                           let n=5
 
1                                   1
2   1                               2   1 
3   2   1                           3   2   1        
4   3   2   1                       4   3   2   1
                                    5   4   3   2   1
*/

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1; 
    while(i<=n) {
        int j = i ;
        while(j >= 1 ) {
        cout << j << "\t" ;
        j-- ;
        }
    cout << endl ;
    i++ ;
    }
}