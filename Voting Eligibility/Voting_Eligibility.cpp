
// check voting eligibility by valid age in if else:-

#include <iostream>
using namespace std;

int main()

{
    int age;

    cout << "Enter your age :- ";
    cin >> age;

    if (age <= 0 || age >= 100)
    {
        cout << "Invalid Your age";
    }
    else if (age >= 18)
    {
        cout << "Your a Eligible for vote !";
    }
    else
    {
        cout << "Your a Not Eligible for vote !";
    }

    return 0;
}

