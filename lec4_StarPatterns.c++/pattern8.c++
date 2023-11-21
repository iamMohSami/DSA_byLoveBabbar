#include <iostream>
using namespace std;

int main()
{
    /* Pattern 8 :
    let n = 4                       let n =5
    1                               1
    2   3                           2   3
    4   5   6                       4   5   6
    7   8   9   10                  7   8   9   10
                                    11  12  13  14   15  */

    int n;
    cout << "Enter the Number of Rows of Pattern you want : ";
    cin >> n;
    int i = 1;
    int k = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << k << "\t";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}