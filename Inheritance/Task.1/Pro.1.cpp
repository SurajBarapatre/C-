// Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class A-> Class B
// Class A has the following members: x, y & z attributes in integer data type
// Class B has the following members: setData() and getData() methods.

#include <iostream>
using namespace std;

class A                                     // class A for contains the integer variables x,y and z, 
{
protected:                                  // for allow class B to access the variables inherited from class A
    int x, y, z;
};

class B : public A                        // for class B inherits class using public class A
{
public:
    void setB()                       // for set data input from user   
    {
        cout << "Enter Three Numbers :- " <<endl;
        cout<<endl;
        cin >> x >> y >> z;
        cout<<endl;
    }

    void getB()                              // for display numbers and calculate sum of their cubes.
    {
        cout << "The First Number is :- " << x << endl;
        cout << "The Second Number is :- " << y << endl;
        cout << "The Third Number is :- " << z << endl;
        cout << endl;

        cout << "The Sum of Cubes of Number is :- "<< (x * x * x) + (y * y * y) + (z * z * z)<< endl;
    }
};

int main()
{
    B b1;               // for create object 

    b1.setB();      // for set a value method
    b1.getB();      // for get value and display method 

    return 0;
}

