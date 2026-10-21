// check electricity amount by using unit per rupees in if else :-


#include <iostream>
using namespace std;

int main()

{
    int unit;
    float amount;

    cout << "Enter Your electricity units :- ";
    cin >> unit;

    if (unit < 0)
    {
        cout << "Invalid units";
    }
    else if (unit <= 100)
    {
        amount = unit * 1.50;
        
        cout << "Your Electricity Bill is = Rs." << amount;
    }
    else if (unit <= 200)
    {
        amount = (100 * 1.50) + (unit - 100) * 2.50;
        
        cout << "Your Electricity Bill is = Rs." << amount;
    }
    else
    {
        amount = (100 * 1.50) + (100 * 2.50) + (unit - 200) * 4.00;

        cout << "Electricity Bill = Rs. " << amount;
    }

    return 0;
}

