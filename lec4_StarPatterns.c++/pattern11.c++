#include <iostream>
using namespace std;

int main() {
/* 
PATTERN 11 : 
let n = 4                           
 
A   A   A   A                        
B   B   B   B                               
C   C   C   C                            
D   D   D   D                   

*/

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;  
    char ch = 'A' ;
    while(i<=n){
        int j = 1 ; 
        while(j<=n) {
            cout << ch << "\t" ;
            j++ ;
        }
    cout << endl ;
        i++ ;
        ch++;
    }

}