#include<iostream>
using namespace std ; 

int main() {

//1.ARTHMETIC OPERATORS : + - * /

    cout << 2/5 << endl ; // will print 0 , as int/int = int 
    cout << 2.0/5 << endl ; // will print 0.4 , as float/int = float

    int a = 2.0/5 ;  //Here, as float/int == float ; thus 2.0/5 = 0.4 BUT AS HERE WE STORE IT IN A 
                     // variable of INT datatype, 0.4 == 0 ; Also, O/P = 0 !!
    cout << a << endl ; 


// 2. ASSIGNMNET OPERATOR : = 
    int myvar = 63 ;

// 3. RELATIONAL OPERATOR : == , >= , <= , > , <  , !=

    int m = 48 ; 
    int b = 63 ; 

    bool first = (m==b) ;
    cout << first << endl ;

    bool sec = (m>b) ;
    cout << sec << endl ;

    bool third = (m<b) ;
    cout << third << endl ;

    bool fourth = (m>=b) ;
    cout << fourth << endl ;

    bool fifth = (m<=b) ;
    cout << fifth << endl ;

    bool six = (m!=b) ;
    cout << six << endl ;


// 4. LOGICAL OPERTAORS : ! , && , || 

    int eww = 2 ;
    cout << !eww << endl ;
    int neww = 0 ;
    cout << !neww << endl ;


// 5. BITWISE OPERATORS IN LECTURE 5 ..

    return 0 ;
}