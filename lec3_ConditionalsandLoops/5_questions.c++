#include<iostream> 
using namespace std ; 

int main () {
    int m = 9 ;
    if(m==9) {
        cout << "Niney" ;
    }
    if (m>0) {
        cout << "Love" ;                         //OUTPUT = NineyLove
    } 
    else {
        cout << "pooor" ;
    }

    int a = 2 ;
    int b = a+1 ;

    if((a=3)==b) {
            cout << a ;                          // OUTPUT = 3  (if gets executed)
    }
    else {
        cout << a+1 ;
    }

  int m = 24 ;
    if(m>20) {
        cout << "Niney" ;
    }
    else if (m==24) {                //UNLIKE case 1 , here it only prints "Niney" 
                                    // and not "Love" , coz "Elseif" will only execute if "if" is FALSE
        cout << "Love" ;  
    }                    
    else {
        cout << "pooor" ;
    }

}