
// find fibonachie number using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c;

    cout << "Enter Your Number :- ";
    
    cin >> n;

    if (n <= 0)
    {
        cout << "Number is Invalid ";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a << " ";                         

            c = a + b; 
            
            a = b; 
            
            b = c;
        }
    }

    return 0;
}

