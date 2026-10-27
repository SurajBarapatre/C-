//wap to create a Car class and minimum 6 attributes, also create methods 
// to set and get data with different variables using encapsulation principals with constructor and destructor

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

// constructor for display welcome message when create objects
    Car()
    {
        cout << "Welcome to Shubhangi Automobiles !" << endl;
        cout << "*--------------------------------*" << endl;
        cout << endl;
    }

// parameterized constructor for set attributes when object is created 
    Car(int modelNo, string modelName, string companyName,string color, double price, int mileage)
    {
        this->modelNo = modelNo;
        this->modelName = modelName;
        this->companyName = companyName;
        this->color = color;
        this->price = price;
        this->mileage = mileage;
    }

// for set data of car details
    void setCar(int modelNo, string modelName,string companyName, string color,double price, int mileage)
    {
        this->modelNo = modelNo;
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
        cout << "Car's Exshowroom Price is :- Rs. "<< this->price << endl;
        cout << "Car Mileage is :- " << this->mileage << " km/l" << endl;
        cout << "---------------------------------------" << endl;
    }

// Destructor for run automatically when each object is destroyed
    ~Car()
    {
        cout << "Thanks for visiting in Shubhangi Automobiles!" << endl;
    }
};

int main()
{
// Objects for using default constructor
    Car a1, a2;

    a1.setCar(101, "Swift", "Maruti", "Red", 700000, 22);
    a2.setCar(102, "Fortuner", "Toyota", "Black", 3500000, 14);

    a1.getCar();
    a2.getCar();

// Object for using parameterized constructor
    Car a3(103, "Nexon", "Tata", "White", 1200000, 17);

    a3.getCar();

    return 0;
}

