// find reverse number using while loop :-

#include <iostream>
using namespace std;

int main()
{
    int n, ld, rev = 0;

    cout << "Enter Your number :- ";
    
    cin >> n;

    while (n > 0)
    {
        ld = n % 10;
        
        rev = rev * 10 + ld;
        
        n = n / 10;
    }

    cout << "The Reverse number is = " << rev << endl;

    return 0;
}


