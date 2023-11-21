#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 24 :
    let n = 4
    1   2   3   4
        2   3   4
            3   4
                4
    */

    //  NOTE THAT, HERE "NEED"  TO PRINT SPACES.....

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // lets print space first
        int spaces = i - 1;
        while (spaces > 0)
        {
            cout << " " << "\t";
            spaces--;
        }
        // lets print numbers now
        int j = 1 ;
        int k = i ;
        while (j <= n - i + 1)
        {
            cout << k << "\t";
            j++;
            k++ ;
        }
        cout << endl;
        i++;
    }
}