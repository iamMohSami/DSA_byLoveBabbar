// Conditionals : IF , ELSE IF , ELSE 


#include<iostream> 
using namespace std ;

int main() {
    int age ;
    cout << "Enter Your Age : " ; 
    cin >> age ;    // To take User Input and store in "age" variable

    if (age<0) {
        cout << "Please Enter Valid Age (It cannot be Negative.! )" << endl ;
    }
    else if ( age > 0 && age <= 12 ) {
        cout << "You are a Child " << endl;
    } 
    else if ( age >= 13 && age <= 18) {
        cout << "You are a Teen " << endl  ;
    }
    else if ( age >= 19 && age <= 50 ) {
         cout << "You are an Adult " << endl ;
    }
    else {
        cout << "You are Old now.. " << endl ; 
    }



}