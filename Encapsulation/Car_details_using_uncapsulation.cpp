//wap to create a Car class and minimum 6 attributes, also create methods 
// to set and get data with different variables using encapsulation principals :-

#include <iostream>
using namespace std;

class Car
{
    int modelNo;
    string modelName;
    string companyName;
    string color;
    double price;
    int mileage;

public:
// for set data of car details and assign values to the private attributes
    void setCar(int modelNo, string modelName,string companyName, string color,double price, int mileage)
    {
// for this refers to the class attrtibute
        this->modelNo = modelNo;                      // for refers to the parameter passed in the function
        this->modelName = modelName;
        this->companyName = companyName;
        this->color = color;
        this->price = price;              
        this->mileage = mileage;
    }

// for get data of car details 
    void getCar()
    {
        cout << "Car Model No is :- " << this->modelNo << endl;
        cout << "Car Model Name is :- " << this->modelName << endl;
        cout << "Car's Company Name is :- " << this->companyName << endl;
        cout << "Car's Color is :- " << this->color << endl;
        cout << "Car's Exshowroom Price is :- Rs. " << this->price << endl;
        cout << "Car Mileage is :- " << this->mileage << " km/l" << endl;
        cout << "---------------------------------------" << endl;
    }
};

int main()
{
// for display the values stored in the object
    Car a1, a2, a3;

    a1.setCar(101, "Swift", "Maruti", "Red", 700000, 22);
    a2.setCar(102, "Fortuner", "Toyota", "Black", 3500000, 14);
    a3.setCar(103, "Nexon", "Tata", "White", 1200000, 17);

    a1.getCar();
    a2.getCar();
    a3.getCar();

    return 0;
}
