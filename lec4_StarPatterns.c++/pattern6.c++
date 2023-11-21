#include<iostream> 
using namespace std ;

int main() {
/* Pattern 6 :  
let n = 4                       let n =5 
*                               *   
*   *                           *   *   
*   *   *                       *   *   *
*   *   *   *                   *   *   *   *
                                *   *   *   *   *
*/

int n ;
cout <<  "Enter the Number of Rows of Pattern you want : " ; 
cin >> n ; 
int i = 1 ;
while(i<=n) {
    int j = 1; 
    while(j <= i) {
        cout << "*" << "\t" ;
        j++ ;
    }
cout << endl ;
i++ ;
}

}