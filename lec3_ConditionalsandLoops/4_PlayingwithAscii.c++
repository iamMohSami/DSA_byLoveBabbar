#include<iostream>
using namespace std ;


int main() {

    // method 1 

    char ch ;
    cout << "Enter a Character b/w {A-Z} or {a-z} or {0-9} :" ;
    cin >> ch ;

    if (ch >= '0' && ch <= '9' ) {
        cout << ch << " is an Integer" << endl ;
    }
    else if (ch >= 'a' && ch <= 'z' ) {
        cout << ch << " is an Small Case Alphabet" << endl ;
    }
    else if (ch >= 'A' && ch <= 'Z' ) {
        cout << ch << " is an Capital Case Alphabet" << endl ;
    }
    else { 
        cout << "Please give a Valid User Input" << endl ;
    }

    // method 2 
    char ch2 ;
    cout << "Enter a Character b/w {A-Z} or {a-z} or {0-9} :" ;
    cin >> ch2 ;
    int ascii = ch2 ;

    if (ascii >= 48 && ascii <= 57 ) {
        cout << ch2 << " is an Integer" << endl ;
    }
    else if (ascii >= 97 && ch <= 122 ) {
        cout << ch2 << " is an Small Case Alphabet" << endl ;
    }
    else if (ascii >= 65 && ascii <= 90 ) {
        cout << ch2 << " is an Capital Case Alphabet" << endl ;
    }
    else { 
        cout << "Please give a Valid User Input" << endl  ;
    }

}