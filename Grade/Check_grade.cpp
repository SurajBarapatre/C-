// check grade by using if else :-

#include <iostream>
using namespace std;

int main()

{
    int marks;

    cout << "Enter your marks: ";
    
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid Marks";
    }
    else if (marks >= 90)
    {
        cout << "Your Grade is :- Grade A+";
    }
    else if (marks >= 80)
    {
        cout << "Your Grade is :- Grade A";
    }
    else if (marks >= 70)
    {
        cout << "Your Grade is :- Grade B";
    }
    else if (marks >= 60)
    {
        cout << "Your Grade is :- Grade C";
    }
    else if (marks >= 40)
    {
        cout << "Your Grade is :- Grade D";
    }
    else
    {
        cout << "Sorry Your Failed,Better Luck Next Time !";
    }

    return 0;
}


