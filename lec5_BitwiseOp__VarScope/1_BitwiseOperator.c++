// BITWISE OPERATOR  
/* 
AND &   OR | 
NOT ~   XOR ^
*/

#include<iostream>
using namespace std ; 

int main() {

    int a = 4 ;  // 4 =   0000 0000..... 0100
    int b = 6 ;  // 6 =   0000 0000..... 0110


    cout << "a&b = " << (a&b) << endl; 
    cout << "a|b = " << (a|b) << endl; 
    cout << "~a = " << (~a) << endl; 
    cout << "a^b = " << (a^b) << endl; 


    return 0 ;
}