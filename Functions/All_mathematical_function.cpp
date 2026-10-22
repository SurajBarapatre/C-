// mathematical functions using functions :-

#include <iostream>
using namespace std;

// Function for addition
int addition(int a, int b)
{
    return a + b;
}

// Function for subtraction
int subtraction(int a, int b)
{
    return a - b;
}

// Function for multiplication
int multiplication(int a, int b)
{
    return a * b;
}

// Function for division
float division(int a, int b)
{
    return (float) a / b;
}

// Function for modulus
int Modulus(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;

    cout << "Enter Your two numbers :- " <<endl;
    
    cin >> a >> b;

    cout << "Your Addition is = " << addition(a, b) << "\n";
    
    cout << "Your Subtraction is = " << subtraction(a, b) << "\n";
    
    cout << "Your Multiplication is = " << multiplication(a, b) << "\n";
    
    
// for checks that b is not zero before division or modulus
    if (b != 0)
    {
        cout << "Your Division is = " << division(a, b) << "\n";
        
        cout << "Your Modulus is = " << Modulus(a, b) << "\n";
    }
    else
    {
        cout << "Division is not possible by zero\n";
        
        cout << "Modulus is not possible by zero\n";
    }

    return 0;
}


