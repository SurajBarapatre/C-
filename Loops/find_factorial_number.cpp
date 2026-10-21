// find factorial number using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;

    cout << "Enter Your number :- ";
    
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not valid for negative numbers";
    }
    else if (n > 12)
    {
        cout << "the Number is too large for int factorial";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        cout << "The Factorial Number is = " << fact << endl;
    }

    return 0;
}


