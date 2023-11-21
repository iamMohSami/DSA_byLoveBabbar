#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 12 :
    let n = 4
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
    */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    while(i<=n) {
         char ch = 'A' ;
        int j = 1 ;
        while(j<=n) {
            cout << ch << "\t" ;
            ch++ ;
            j++ ;
        }
    cout << endl ;
        i++ ;
    }

    // METHOD 2 :

    // LOVE BABBAR METHOD : 

    /*
    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    */
}