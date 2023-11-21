#include<iostream> 
using namespace std ;

int main() {
/* Pattern 7 :  
let n = 4                       let n =5 
1                               1
2   2                           2   2
3   3   3                       3   3   3
4   4   4   4                   4   4   4   4   
                                5   5   5   5   5  */

int n ;
cout <<  "Enter the Number of Rows of Pattern you want : " ; 
cin >> n ; 
int i = 1 ;
while(i<=n) {
    int j = 1 ;
    while(j<=i) {
        cout << i << "\t" ;
        j++ ;
    }
    cout << endl ;
    i++ ;
}



}