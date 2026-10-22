// wap to create a Car class and minimum 6 attributes, also create methods to set and get data :-

#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string carName;
    string fuelType;
    int seatingCapacity;
    double mileage;
    double price;

    // For Set data
    void setCar(string b, string cn, string ft,int seats, double mil, double p)
    {
        brand = b;
        carName = cn;
        fuelType = ft;
        seatingCapacity = seats;
        mileage = mil;
        price = p;
    }

    // For Get and display data
    void getCar()
    {
        cout << "Brand :- " << brand << endl;
        cout << "Car Name :- " << carName << endl;
        cout << "Fuel Type :- " << fuelType << endl;
        cout << "Seating Capacity :- " << seatingCapacity << endl;
        cout << "Mileage :- " << mileage << " km/l" << endl;
        cout << "Price :- Rs. " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    Car a, b, c;

    a.setCar("Toyota", "Fortuner", "Diesel", 7, 14.5, 3500000);
    b.setCar("Honda", "City", "Petrol", 5, 17.8, 1200000);
    c.setCar("Tata", "Nexon", "Electric", 5, 300, 1500000);

    a.getCar();
    b.getCar();
    c.getCar();

    return 0;
}
