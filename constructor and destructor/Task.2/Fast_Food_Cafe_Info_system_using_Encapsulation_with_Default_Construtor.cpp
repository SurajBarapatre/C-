// Write a Program to get and display Fast Food cafe information using encapsulation 
// and the use of a Default constructor by including the below-mentioned attributes

#include <iostream>
using namespace std;

class Cafe
{
// for declare private attributes
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
// default constructor for display welcome message when create objects
    Cafe()
    {
        cout << "Welcome to Fast Food Cafe !" << endl;
        cout << ":-------------------------:" << endl;
        cout << endl;
    }

// for set data of cafe details
    void setCafe(int id, string name, string type, string rating,
                 string location, int year, int staff)
    {
        this->cafe_id = id;
        this->cafe_name = name;
        this->cafe_type = type;
        this->cafe_rating = rating;
        this->cafe_location = location;
        this->cafe_establish_year = year;
        this->cafe_staff_quantity = staff;
    }

// for get and display cafe details
    void getCafe()
    {
        cout << "The Cafe ID is :- " << this->cafe_id << endl;
        cout << "The Cafe Name is :- " << this->cafe_name << endl;
        cout << "The Cafe Type is :- " << this->cafe_type << endl;
        cout << "The Cafe Rating is :- " << this->cafe_rating << endl;
        cout << "The Cafe Location is :- " << this->cafe_location << endl;
        cout << "The Cafe Establish Year is :- " << this->cafe_establish_year << endl;
        cout << "The Cafe Staff Quantity is :- " << this->cafe_staff_quantity << endl;

        cout << ":----------------------------------------:" << endl;
        cout << endl;
    }

// destructor for run automatically when each object is destroyed
    ~Cafe()
    {
        cout << "Thanks for visiting Fast Food Cafe !" << endl;
    }
};

int main()
{
// objects using default constructor
    Cafe c1, c2;

// for set cafe details
    c1.setCafe(101, "Shubhangi_Cafe", "Rooftop", "5 Star","Surat", 2015, 25);

    c2.setCafe(102, "Food_Corner", "Normal", "4 Star","Ahmedabad", 2018, 15);

// for get and display cafe details
    c1.getCafe();
    c2.getCafe();

// for create another object using default constructor
    Cafe c3;

// for set cafe details
    c3.setCafe(103, "Tasty_Bites", "Rooftop", "3 Star","Mumbai", 2020, 20);

// for get and display cafe details
    c3.getCafe();

    return 0;
}


