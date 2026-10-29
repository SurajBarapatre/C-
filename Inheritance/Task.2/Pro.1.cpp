// Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
// Class P has the following members: temperature attribute in float
// Class Q has the following members: toFehrenheit() method
// Class R has the following members: toKelvin() method.

#include <iostream>
using namespace std;

class P                                                // for store the value of temperature in Celsius using float Variable Temperature
{
protected:        
    float temperature;                                // for allow class P to access the variables inherited from class Q

public:
    void setTemprature()                             // for set data input from user                 
    {
        cout << "Enter The Temperature in Celsius is :- ";
        cin >> temperature;
        cout << endl;
    }
};

class Q : public P                                // for class Q inherits class using public class P
{
protected:
    float fahrenheit;

public:                                          // for calculate degree celcius in fahrenheit
    void toFahrenheit()
    {
        fahrenheit = (temperature * 9 / 5) + 32;

        cout << "The Temperature in Fahrenheit is :- "<< fahrenheit << "F"<< endl;
        cout << endl;
    }
};

class R : public Q                          // for class R inherits class using public class Q
{
    float kelvin;

public:
    void toKelvin()                        // for calculate degree fahrenheit in kelvin
    {
        kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;

        cout << "The Temperature in Kelvin is :- " << kelvin <<"K"<< endl;
    }
};

int main()
{
    R r1;                         // for create object

    r1.setTemprature();          // for set value in temperature
    r1.toFahrenheit();           // for get value and display in fahrenheit
    r1.toKelvin();               // for get value and display in kelvin

    return 0;
}
