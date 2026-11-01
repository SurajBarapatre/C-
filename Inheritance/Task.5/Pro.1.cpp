// Write a Program to find the area and perimeter of a rectangle using single-level inheritance.
// Class A contains length and width attributes.
// Class B contains setB() and getB() methods.

#include <iostream>
using namespace std;

class A                                      // class A for contains length and width
{
protected:
	
    int length, width;
};

class B : public A                           // for class B inherits class A
{
public:
    void setB()                              // for input length and width
    {
        cout << "Enter Length and Width :- " << endl;
        cout << endl;
        cin >> length >> width;
        cout << endl;
    }

    void getB()                              // for display and calculate area and perimeter
    {
        cout << "The Length is :- " << length << endl;
        cout << "The Width is :- " << width << endl;
        cout << endl;

        cout << "The Area of Rectangle is :- " << length * width << endl;

        cout << "The Perimeter of Rectangle is :- " << 2 * (length + width) << endl;
    }
};

int main()
{
    B b1;                                    // for create object

    b1.setB();                               // for set values
    b1.getB();                               // for display values

    return 0;
}

