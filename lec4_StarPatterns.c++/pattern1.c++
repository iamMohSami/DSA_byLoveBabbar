#include<iostream> 
using namespace std ;

int main() {


/* Pattern 1 : 
  *****
  *****
  *****
  *****
  *****
*/

/* HOW TO? 
1. number of rows
2. how many colums in each row 
3. formula/relation bw row and columns

*/

int n ;
cout << "Enter the Number of Rows of Pattern you want : " ;
cin >> n ; 

int i = 1 ; 
while(i<= n) {
    int j = 1 ;       //THE PLACEMENT OF THIS VARIABLE DECLARATION IS ALSO VERY IMPORTANT
    while(j <= n) {     // THIS IS THE FORMULA 
        cout << "*" << "\t" ; 
        j = j+1 ;
    }
    cout << endl ;
    i = i+1 ;
}

/* VERY IMPORTANT , I MADE THS MISTAKE THE FIRST TIME : 
In MAIN CODE,'j' is declared inside the 'i' loop. This means that 'j' is reset to 1 at the beginning of each row, and the code correctly prints each row of asterisks on separate lines.

In WRONG CODE , 'j' is declared outside of the 'i' loop. This means 'j' retains its value across different rows, leading to all asterisks in the entire grid being printed on a single line. 
*/


/* WRONG CODE HERE ,
int i = 1 ; 
int j = 1 ;     //THE PLACEMENT OF THIS VARIABLE DECLARATION IS ALSO VERY IMPORTANT
while(i<= n) {
    while(j <= n) {    
        cout << "*" ; 
        j = j+1 ;
    }
    cout << endl ;
    i = i+1 ;
}

*/

}




