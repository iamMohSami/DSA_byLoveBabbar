#include<iostream> 
using namespace std ;

int main() {
/* Pattern 3 : 
let n= 5 
1   2   3   4   5
1   2   3   4   5
1   2   3   4   5
1   2   3   4   5
1   2   3   4   5   
*/

int n ;
cout << "Enter the Number of Rows of Pattern you want : " ;
cin >> n ; 
int i = 1 ;

while(i<=n) {
    for(int j = 1 ; j <= n ; j++) {
        cout << j << "\t" ;
    }
    cout << "\n" ;
    i++ ;
}

// without using FOR loop 
// while(i<=n) {
//     int j = 1 ;
//     while(j <= n ) { 
//         cout << j << "\t" ;
//         j++ ;
//     }
//     cout << "\n" ;
//     i++ ;
// }




    
}