/*  SHIFT OPERATORS
    1. LEFT SHIFT << 
    2. RIGHT SHIFT >>

eg: 
    " LEFT SHIFT "

5 << 1 : 5 ko ek baar left shift kardo 
         5 =   0000 0000 0000 0000 0000 0000 0000 0000 0101
        <<1=  '0'000 0000 0000 0000 0000 0000 0000 0000 101"0"  

THUS, NOW IGNORE/REMOVE '0' AND ADD "0" AT THE END :: 5 << 1 == 10  

NOTE : 5 << 1 = 10 i.e. LEFTSHIFT BY 1 = MULTIPLY BY 2, 5*2 = 10 
       3 << 2 = 12 i.e. LEFTSHIFT BY 2 = MULTIPLY BY 2 EACH, 3*2*2 = 12 
       
       "THIS ONLY WORKS ON SMALL NUMBERS AND NOT ON LARGE NUMBERS"



    " RIGHT SHIFT " 
15 >> 1 : 15 ko ek baar right shift kardo 
          15 = 0000 0000 0000 0000 0000 0000 0000 1111
        15>>1 ='0'000 0000 0000 0000 0000 0000 0000  0111 "1" 
    THUS, NOW REMOVE "1" AND ADD "0" :: 15 >> 1 == 7

    NOTE : 15 >> 1 = 7 i.e. RIGHTSHIFT BY 1 = DIVIDE BY 2, 15/2 = 7 
            5 >> 2 = 1 i.e. RIGHTSHIFT BY 2 = DIVIDE BY 2 EACH, 5/2/2 = 1 
       
       "THIS ONLY WORKS ON SMALL NUMBERS AND NOT ON LARGE NUMBERS"

VERY IMPORTANT : 
IN +VE NUMBERS, new padding always with " 0 "
IN -VE NUMBERS, new padding always with " 0/1 COMPILER DEPENDENT "
*/ 

#include<iostream>
using namespace std ; 

int main() {
    int a = 5 ; 
    int b = 15 ;
    cout << "5 << 1  = " << (5<<1) << endl ;
    cout << "3 << 2  = " << (3<<2) << endl ;
    cout << "15 >> 1  = " << (15>>1) << endl ;
    cout << "5 >> 2  = " << (5>>2) << endl ;
    cout << "\n" ; 
    cout << "17 >> 1 =" << (17>>1) << endl ;
    cout << "17 >> 2 =" << (17>>2) << endl ;
    cout << "19 << 1 =" << (19<<1) << endl ; 
    cout << "21 << 2 =" << (21<<2) << endl ;


    return 0 ;
}