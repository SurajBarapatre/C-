// Write a Program to demonstrate the use of scope resolution operator to solve ambiguity errors using multiple inheritance.
// Class A contains id.
// Class B inherits Class A and contains marks.
// Class C inherits Class A and contains fees.
// Class D inherits both Class B and Class C and contains total.

#include <iostream>
using namespace std;

class A                                      // for base class
{
public:
    int id = 101;
};

class B : public A                           // for class B inherit to class A
{
public:
    int marks = 85;
};

class C : public A                           // for class C inherit to class A
{
public:
    int fees = 25000;
};

class D : public B, public C                 // for using multiple inheritance with class D
{
public:
    int total = 110;

    void getD()                              // for display all values
    {
        cout << "The Student ID is :- " << C::id << endl;
        cout << endl;
        
        cout << "The Student Marks are :- " << marks << endl;
        cout <<endl;
        
        cout << "The Student Fees are :- " << fees << endl;
        cout <<endl;
        
        cout << "The Total Marks are :- " << total << endl;
    }
};

int main()
{
    D d1;                                    // for create object

    d1.getD();                               // for display values

    return 0;
}

