#include<iostream> 
using namespace std ;

int main() { 
    int a ;
    cout << "Enter : " ;
    cin >> a ;
    cout << "You have Entered :" << a << endl ;

    // cin.ignore() ;

// HERE, IN THE INPUT SECTION , I NEED TO ENTER SOMETHING
// SOMETHING : integer 10,23,63,69,48 ...... character ,, THESE ARE ACCEPTABLE and the cout gets printed

// BUT, in the cin input area : IF I TYPE "SPACEBAR" , "TAB" , "ENTER "
//IT DOESNT RECOGNIZES/READS IT ... IT STILL WAITS FOR A USER INPUT 

    int b ;
    cout << "Enter : " ;
    b = cin.get() ;
    cout << "You have Entered :" << b << endl ;

// IF WE USE "cin.get()" , it also reads "SPACE" , "TAB" and "ENTER" 
// HERE, IF I ENTER : 48 , it only reads one character at a time 
//  here, it reads only "4" out of "48" 
// OUTPUT : ASCII of "4" --> 52 
// if i enter : "tab" "space" "enter" : 
// OUTPUTS : "tab" --> 9     "space"--> 32     "enter"-->  10


}