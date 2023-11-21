#include<iostream> 
using namespace std ;

int main() {
/* Pattern 5 :  
let n= 3                let n = 4 
1   2   3               1   2   3   4
4   5   6               5   6   7   8
7   8   9               9   10  11  12
                        13  14  15  16
*/ 

int n ;
cout <<  "Enter the Number of Rows of Pattern you want : " ; 
cin >> n ; 
int i = 1 ;
int k = 1 ;
while(i<=n) {
    int j = 1 ;
    while(j<=n){
    cout << k << "\t" ;
    k++ ;
    j++ ;
    }
    cout << endl ;
    i++ ;
}

}