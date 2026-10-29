// Write a Program to print the rate of interest of different banks using hierarchical inheritance:
// Class RBI -> Class SBI
// Class RBI -> Class BOB
// Class RBI -> Class ICICI
// inherit rate attribute and getROI() method in all child classes

#include <iostream>
using namespace std;

class RBI                                 // class RBI for the rate attribute and getROI() method
{
protected:
    float rate;                          // for allow RBI to access the variables inherited class SBI,BOB and ICICI

public:
    void getROI()                        // for get value and display to user
    {
        cout << rate << "%" << endl;
    }
};

class SBI : public RBI                  // for class SBI inherits class using public class RBI
{
public:
    void getROI()                                       
    {
        rate = 6.5;
        cout << "The Rate of Interest of SBI Bank is :- ";
        RBI::getROI();                                      // used scope resolution operater to for call and print method of class RBI
        cout << endl;
    }
};

class BOB : public RBI               // for class BOB inherits class using public class RBI
{
public:
    void getROI()
    {
        rate = 7.0;
        cout << "The Rate of Interest of BOB Bank is :-";
        RBI::getROI();                                     // used scope resolution operater to for call and print method of class RBI
        cout << endl;
    }
};

class ICICI : public RBI         // for class ICICI inherits class using public class RBI
{
public:
    void getROI()
    {
        rate = 7.5;
        cout << "The Rate of Interest of ICICI Bank is :-";
        RBI::getROI();                                       // used scope resolution operater to for call and print method of class RBI
    }
};

int main()
{
    SBI sbi;          // for create object
    BOB bob;
    ICICI icici;

    sbi.getROI();      // for get value and display to rate of interest
    bob.getROI();
    icici.getROI();

    return 0;
}
