// find min value with 4 variables using if-else :-

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter Your four numbers : " <<endl;
    
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d)
    {
        cout << "All values are equal" << endl;
        
        cout << "Minimum Number is = " << a << endl;
    }
    else if (a <= b && a <= c && a <= d)
    {
        cout << "Minimum Number is = " << a << endl;
    }
    else if (b <= a && b <= c && b <= d)
    {
        cout << "Minimum Number is = " << b << endl;
    }
    else if (c <= a && c <= b && c <= d)
    {
        cout << "Minimum Number is = " << c << endl;
    }
    else
    {
        cout << "Minimum Number is = " << d << endl;
    }

    return 0;
}


