// Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

#include <iostream>
using namespace std;

class Number                                  // class Number for store a number
{
protected:
	
    int num;

public:
	
    Number(int n)                             // for initialize number using constructor
    {
        num = n;
    }
};

class Square : public Number                  // for class square inherit class Number
{
public:
	
    Square(int n) : Number(n)                 // for call parameterized constructor of base class
    {
    }

    void square()                             // for calculate square of number
    {
        cout << "The Number is :- " << num << endl;
        cout << "The Square of Number is :- " << num * num << endl;
    }
};

class Cube : public Number                    // for class cube inherit class Number
{
	
public:
	
    Cube(int n) : Number(n)                   // for call parameterized constructor of base class
    {
    }

    void cube()                               // for calculate cube of number
    {
        cout << "The Number is :- " << num << endl;
        cout << "The Cube of Number is :- " << num * num * num << endl;
    }
};

int main()
{
    Square s1(5);                             // for create square object
    Cube c1(5);                               // for create cube object

    cout << ":-------The Square Details-------:" << endl;
    cout << endl;
    s1.square();                              // for calculate and display square

    cout << endl;

    cout << ":-------The Cube Details -------:" << endl;
    cout << endl;
    c1.cube();                                // for calculate and display cube

    return 0;
}
