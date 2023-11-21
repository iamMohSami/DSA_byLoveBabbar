/*
post increment : i++  = First Use the i value and then Increment
pre increment : ++i   = First Increment and then use the i value
post decrement : i--  = First Use the i value and then Decrement
pre decrement : --i   = First Decrement and then use the i value

sum = sum + b : sum += b

*/

#include <iostream>
using namespace std;

int main()
{
    int i = 8;

    cout << (i++) << endl;
    // first print "8" and then Increment, i=9
    cout << (++i) << endl;
    // first increment i=10 , and print "10"
    cout << (i--) << endl;
    // first print "10" and then Decrement i=9
    cout << (--i) << endl;
    // first decrement i=8 and then print "8"



    // 3  QUESTIONS ::



    int a, b = 1;
    a = 10;
    if (++a) // here a=11 ; NON-ZER0 ; if will be executed
        cout << b;
    else
        cout << (++b);                      // Output = 1

    cout << "\n";



    int c = 1, d = 2;
    if (c-- > 0 && ++d > 2) // 1>0 TRUE and 3>2 TRUE ; IF will Execute
        cout << "Inside if" << endl;
    else
        cout << "Inside Else" << endl;       // Output = "Inside If"
                                             //           0 and 3
    cout << c << " and " << d ;

cout << "\n";

    int number = 3 ;
    cout << (25 * (++number)) ; // 25*4=100
    return 0;
}