#include <iostream>
using namespace std;

int main()
{
    int a = 63;
    char ch = 'm';  //Cant store more than one char , i.e. "m" is correct , "ms" is wrong
    bool b1 = true;
    bool b2 = false;
    float f = 1.23;
    double d = 1.236;  //As name suggests it has double the precision of that of float 

    cout << a << " is an Integer Datatype" << endl;
    cout << ch << " is an Character Datatype" << endl;
    cout << b1 << " is an Boolean Datatype" << endl;
    cout << b2 << " is an Boolean Datatype" << endl;
    cout << f << " is an Float Datatype" << endl;
    cout << d << " is an Double Datatype" << endl;

    cout << "The Size of INT is : " << sizeof(a) << endl;
    cout << "The Size of CHAR is : " << sizeof(ch) << endl;
    cout << "The Size of BOOL is : " << sizeof(b1) << endl;
    cout << "The Size of FLOAT is : " << sizeof(f) << endl;
    cout << "The Size of DOUBLE is : " << sizeof(d) << endl;
}