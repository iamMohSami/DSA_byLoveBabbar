#include <iostream>
using namespace std;

int main()
{
    /*
    PATTERN 25 :
    let n = 4
                1
            2   3
        4   5   6
    7   8   9   10
    */

    //  NOTE THAT, HERE "NEED"  TO PRINT SPACES.....

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    int k = 1;

    while (i <= n)
    {
        // lets print space first
        int spaces = n - i;
        while (spaces > 0)
        {
            cout << " " << "\t";
            spaces--;
        }
        // lets print numbers now
        int j = 1;
        while (j <= i)
        {
            cout << k << "\t";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
}