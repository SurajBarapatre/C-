// find cube any number using function :-

#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n;

    cout << "Enter Your Number :- ";
    
    cin >> n;

    cout << "Your Number of Cube is = " << cube(n) << "\n";

    return 0;
}
