// check number is palindrom or not using while loop :-

#include <iostream>
using namespace std;

int main()
{
    int n, original, ld, rev = 0;

    cout << "Enter Your number :- ";
    
    cin >> n;

    original = n;

    while (n > 0)
    {
        ld = n % 10;
        
        rev = rev * 10 + ld;
        
        n = n / 10;
    }

    if (original == rev)
    {
        cout << "The Number is Palindrome number !";
    }
    else
    {
        cout << "The Number is Not palindrome number !";
    }

    return 0;
}



