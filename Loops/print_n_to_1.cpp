
// print n to 1 using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n :- ";
    
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }

    return 0;
}

