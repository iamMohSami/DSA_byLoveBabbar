#include <iostream>
using namespace std;

int main() {

/* 
PATTERN 9 : 
let n = 4                           let n=5
 
1                                   1
2   3                               2   3   
3   4   5                           3   4   5
4   5   6   7                       4   5   6   7
                                    5   6   7   8   9
*/

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1; 
    while(i<=n) {
        int j = 1 ;
        int k = i ;
        while(j<=i) {
            cout << k << "\t" ;
            j++ ;
            k++ ;
        } 
        cout << endl ;
        i++ ;
    }
}



/* WITHOUT USING EXTRA VARIABLE.......VERY VERY VERY IMPORTANT */
    // while(i<=n){
    //     int j = i;
    //     while(j<2*i){
    //         cout<<j<<" ";
    //         j =j+1;
    //     }
    //     cout<<endl;
    //     i =i+1;
    // }