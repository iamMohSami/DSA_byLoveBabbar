#include<iostream> 
using namespace std ;

int main () {

    // TYPECASTING ARE OF TWO TYPES , IMPLICIT TYPECASTING and EXPLICIT TYPECASTING


    //IMPLICIT TYPECASTING
    int a = 'a' ; // here, 'a' is a char, but we stored it with "int" datatype
                  //  the op will be its ascii equivalent number i.e. a = 97
    cout << a << endl ;

    int b = '8' ; // 8 being an integer,stored as '8' i.e a char , again typecasted as int ,i.e. ASCII 8 == 56
    cout << b << endl ;

    char ch = 98 ; // 98 is an int, stored as ch , op is ASCII 98 == 'b'
    cout << ch << endl ;


    // 123456 being an INT (4bytes) but stored in CHAR(1byte), thus all 4 bytes cannot be stores
    // 123456 = 00000000 00000001 11100010 01000000
    // But when put in char, only 1 byte can be stored, thus the last byte "01000000" is stored
    // When we try to print it, "01000000" = 64 , and in ASCII 64 = @ 
    // Thus, "@" gets printed with an implicit conversion warning
    char ch2 = 123456 ; 
    cout << ch2 << endl ;




    //EXPLICIT TYPECATING 

    // NORMAL CASE
    float fl = 98.23 ;
    float sum = fl + 1 ; //float + int = float , also stored in float thus answer = 99.23
    cout << sum << endl ;

    // CHANGING THE SUM VARIABLE DATATYPE FROM float TO int
    int sum2 = fl + 1.0 ;  //98.23+1.0 = 99.23 BUT to store in INT ; 99.23 == 99
    cout << sum2 << endl ;

    // EXPLICIT CONVERSION/TYPECASTING
    int sum3 = (int)fl + 1.0 ;
    cout << sum3 << endl ;

    unsigned int x = 123 ; //USING unsigned int only for positive numbers and with more range of numbers
    cout << x << endl ;


    unsigned int y = -123 ;
    cout << y << endl ;   // The output will be a very big number, coz here MSB = 1 , it doesnt consider
                          // for the Negative numbers so it just takes the 2's comp bits     

}