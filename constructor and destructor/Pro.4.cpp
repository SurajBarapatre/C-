// wap to convert inches into feet using encapsulation principals with constructor and destructor
#include <iostream>
using namespace std;

class Inches
{
    double inches;
    double feet;

public:
 // constructor for display welcome message when create objects
    Inches()
    {
        cout << "Welcome to Inches to Feet Converter!" << endl;
        cout << "------------------------------------" << endl << endl;
    }

// parameterized constructor for accepts an inches value and convert it into feet
    Inches(double inch)
    {
        this->inches = inch;
        this->feet = inch / 12;
    }

  // for sets the inches value and calculates feet
    void setInches(double inch)
    {
        this->inches = inch;
        this->feet = inch / 12;
    }

// for get and displays the inches and feet
    void getInches()
    {
        cout << "The Inches are :- " << inches << endl;
        cout << "the Feet is :- " << feet << endl;
        cout << "----------------" << endl;
        cout << endl;
    }

//destructor for run automatically when each object is destroyed
    ~Inches()
    {
        cout << "Thank you for using the converter!" << endl;
    }
};

int main()
{
// for default constructor objects
    Inches a1, a2;

 // For set values using set method 
    a1.setInches(15);
    a2.setInches(30);

// for Display values using get method
    a1.getInches();
    a2.getInches();

// for parameterized constructor object
    Inches a3(45);
    a3.getInches();

    return 0;
}
