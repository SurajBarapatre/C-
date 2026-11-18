// Write a Program to get and display Diamond company information using encapsulation 
// and the use of a Parameterised Constructor by including the below mentioned attributes

#include <iostream>
using namespace std;

class Diamond
{
// for declare private attributes
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
// constructor for display welcome message when create objects
    Diamond()
    {
        cout << "Welcome to Diamond Company !" << endl;
        cout << ":---------------------------:" << endl;
        cout << endl;
    }

// parameterized constructor for set attributes when object is created
    Diamond(int id, string name, int staff, double revenue,
            int imported, int exported, string ceo)
    {
        this->comp_id = id;
        this->comp_name = name;
        this->comp_staff_quantity = staff;
        this->comp_revenue = revenue;
        this->comp_import_raw_diamonds = imported;
        this->comp_export_diamonds = exported;
        this->comp_ceo = ceo;
    }

// for set data of diamond company details
    void setDiamond(int id, string name, int staff, double revenue,
                    int imported, int exported, string ceo)
    {
        this->comp_id = id;
        this->comp_name = name;
        this->comp_staff_quantity = staff;
        this->comp_revenue = revenue;
        this->comp_import_raw_diamonds = imported;
        this->comp_export_diamonds = exported;
        this->comp_ceo = ceo;
    }

// for get and display diamond company details
    void getDiamond()
    {
        cout << "The Company ID is :- " << this->comp_id << endl;
        cout << "The Company Name is :- " << this->comp_name << endl;
        cout << "The Company Staff Quantity is :- " << this->comp_staff_quantity << endl;
        cout << "The Company Revenue (Per Year) is :- Rs. " << this->comp_revenue << endl;
        cout << "The Raw Diamonds Imported (Per Year) is :- " << this->comp_import_raw_diamonds << endl;
        cout << "The Diamonds Exported (Per Year) is :- " << this->comp_export_diamonds << endl;
        cout << "The Company CEO Name is :- " << this->comp_ceo << endl;

        cout << ":----------------------------------------:" << endl;
        cout << endl;
    }

// destructor for run automatically when each object is destroyed
    ~Diamond()
    {
        cout << "Thanks for visiting Diamond Company !" << endl;
    }
};

int main()
{
// objects using default constructor
    Diamond d1, d2;

// for set diamond company details
    d1.setDiamond(101, "Shubhangi_Diamonds", 500, 25000000,10000, 8000, "Mr._Rahul_Sharma");

    d2.setDiamond(102, "Royal_Diamonds", 300, 18000000,8000, 6000, "Mr._Amit_Patel");

// for get and display diamond company details
    d1.getDiamond();
    d2.getDiamond();

// object using parameterized constructor
    Diamond d3(103, "Star_Diamonds", 700, 35000000,15000, 12000, "Mr._Kunjan_Singh");

// for get and display diamond company details
    d3.getDiamond();

    return 0;
}

