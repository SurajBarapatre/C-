// Write a Program to convert a given distance in kilometers into meters and meters into centimeters using multilevel inheritance.
// Class P contains km attribute.
// Class Q contains toMeter() method.
// Class R contains toCentimeter() method.

#include <iostream>
using namespace std;

class P                                      // class P for contains kilometer
{
protected:
	
    float km;
};

class Q : public P                           // for class Q inherits class P
{
protected:
    float meter;

public:
    void setQ()                              // for input kilometer from user
    {
        cout << "Enter The Distance in Kilometer :- " << endl;
        cout << endl;
        cin >> km;
        cout << endl;
    }

    void toMeter()                           // for convert kilometer into meter
    {
        meter = km * 1000;

        cout << "The Distance in Kilometer is :- " << km << endl;
        cout << "The Distance in Meter is :- " << meter << endl;
    }
};

class R : public Q                           // for class R inherits class Q
{
    float centimeter;

public:
    void toCentimeter()                      // for convert meter into centimeter
    {
        centimeter = meter * 100;

        cout << "The Distance in Centimeter is :- " << centimeter << endl;
    }
};

int main()
{
    R r1;                                    // for create object

    r1.setQ();                               // for input kilometer
    r1.toMeter();                            // for convert into meter
    r1.toCentimeter();                       // for convert into centimeter

    return 0;
}

