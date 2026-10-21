// find sum of 1 to n using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the value of n :- ";
    
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of N is = " << sum << endl;

    return 0;
}


