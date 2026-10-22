// print multiplication table of any number using function :-

#include <iostream>
using namespace std;

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
	    cout << n << " * " << i << " = " << n * i << "\n";
    }
}

int main()
{
    int n;

    cout << "Enter Your Number :- ";
    
    cin >> n;

    table(n);

    return 0;
}
