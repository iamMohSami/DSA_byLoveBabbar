/*
In LOOPing, we have two Keywords : BREAK and CONTINUE
BREAK : GETS OUT OF THE ENTIRE LOOP
CONTINUE : SKIPS THE CURRENT ITERATION
*/

// break example
// In checking of Prime, we divide "n" with for all numbers from 2 to (n-1)
// Here, if it is divisble by any one number also, the Result is ready and no need to check further
// Thus, we use "Break" and Exit the LOOP

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number to check : ";
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break; // IT EXISTS THE ENTIRE FOR LOOP, IF TRUE
        }
    }

    if (isPrime == 0)
    {
        cout << n << " is NOT PRIME" << endl;
    }

    else
    {
        cout << n << " is PRIME" << endl;
    }

    // break example
    // Printing ODD numbers
    int num;
    cout << "Enter the Number upto which you want ODD Numbers: ";
    cin >> num;
    for(int i = 1 ; i<=num ; i++) {
        if(i%2 == 0) {
            continue;
        }
        cout << i << "\t" ;
    }

    return 0;
}