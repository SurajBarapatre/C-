// check the number is magic number or not using while loop :-

#include <iostream>
using namespace std;

int main()
{
    int n, ld;
    
    int sum = 0, multi = 1;

    cout << "Enter Your number :- ";
    
    cin >> n;

    while (n > 0)
    {
        ld = n % 10;

        sum = sum + ld;
        
        multi = multi * ld;

        n = n / 10;
    }

    if (sum == multi)
    {
        cout << "The Number is Magic Number !";
    }
    else
    {
        cout << "The Number is Not Magic Number !";
    }

    return 0;
}



