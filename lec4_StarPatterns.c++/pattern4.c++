#include<iostream> 
using namespace std ;

int main() {
/* Pattern 4 : 
let n= 5 
5   4   3   2   1  
5   4   3   2   1  
5   4   3   2   1  
5   4   3   2   1     
5   4   3   2   1  
*/

int n ;
cout <<  "Enter the Number of Rows of Pattern you want : " ; 
cin >> n ; 
int i = 1 ;
while(i<=n) {
    int j =1 ;
    while(j<=n){
        cout << n-j+1 << "\t" ;
        j++ ;
    }
    cout << endl ;
    i++ ;
}

}