#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 20 :
    let n = 4
    *   *   *   *
    *   *   *
    *   *
    *

    */



//  NOTE THAT, HERE NO NEED TO PRINT SPACES..... 

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "*"
                 << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}