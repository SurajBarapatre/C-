// find sum of 1 to n using recursion in Function :-

#include <iostream>
using namespace std;

int sum(int n)
{
//for stop the recursion and return 0
	if (n == 0)
    {
        return 0;
    }
    else
    {
// for adds n to the sum of numbers before 
		return n + sum(n - 1);
    }
}

int main()
{
    int n;

    cout << "Enter Your Number :- ";
    
    cin >> n;

    cout << "Your Sum of Number is = " << sum(n) << "\n";

    return 0;
}

