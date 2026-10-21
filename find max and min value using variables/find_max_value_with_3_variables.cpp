
// find max value with 3 variables using if else :-

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter Your Three Numbers : "<<endl;
    
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "All Numbers are equal" << endl;
        
        cout << "Maximum Number is = " << a << endl;
    }
    else if (a >= b && a >= c)
    {
        cout << "Maximum Number is = " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "Maximum Number is = " << b << endl;
    }
    else
    {
        cout << "Maximum Number is = " << c << endl;
    }

    return 0;
}


