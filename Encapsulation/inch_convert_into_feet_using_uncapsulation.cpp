// wap to convert inches into feet using uncapsulation :-

#include <iostream>
using namespace std;

class Converter
{
    float inches,feet;

public:
// for assign the inches value to private attributes 
    void setData(float inch)
    {
        this->inches = inch;                  // for refers to current object inches attributes
    }

    void getData()
    {
// for get data and convert inches into feet and display result
		this->feet = this->inches / 12;

        cout << "The Inches are :-" << this->inches << endl;
        cout << "The Feet is :- " << this->feet << endl;
    }
};

int main()
{
// for create object of the converter class
    Converter c;
    float value;

    cout << "Enter The inches :- ";
    cin >> value;

    c.setData(value);
    c.getData();

    return 0;
}
