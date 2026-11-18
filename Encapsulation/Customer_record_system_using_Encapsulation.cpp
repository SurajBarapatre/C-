//Write a Program to create a Customer Record System for 5 customers using Encapsulation. 
// Consider the below-mentioned attributes in the Customer structure

#include <iostream>
using namespace std;

class Customer
{
    // for declare private attributes
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
// for assign values to the private attributes
    void setCustomer(int id, string name, int age, string city,string mobile, int validity, string brand)
    {
// for refer to class attributes
        this->cust_id = id;
        this->cust_name = name;
        this->cust_age = age;
        this->cust_city = city;
        this->cust_mobile_number = mobile;
        this->cust_simcard_validity = validity;
        this->cust_telecom_brand_name = brand;
    }

// for get and display customer details
    void getCustomer()
    {
        cout << ":------- The Customer Details -------:" << endl;
        cout << endl;

        cout << "The Customer ID is :- " << this->cust_id << endl;
        cout << "The Customer Name is :- " << this->cust_name << endl;
        cout << "The Customer Age is :- " << this->cust_age << endl;
        cout << "The Customer City is :- " << this->cust_city << endl;
        cout << "The Customer Mobile Number is :- " << this->cust_mobile_number << endl;
        cout << "The SIM Card Validity is :- " << this->cust_simcard_validity << " Years" << endl;
        cout << "The Telecom Brand Name is :- " << this->cust_telecom_brand_name << endl;

        cout << ":-----------------------------------:" << endl;
        cout << endl;
    }
};

int main()
{
    // for create array of 5 Customer objects
    Customer c[5];

    // for assign values to 5 customer objects
    c[0].setCustomer(1, "Rahul_Sharma", 25, "Surat","9876543210", 2, "Jio");

    c[1].setCustomer(2, "Priya_Patel", 22, "Ahmedabad","9876501234", 3, "Airtel");

    c[2].setCustomer(3, "Amit_Kumar", 28, "Mumbai","9876512345", 1, "Vi");

    c[3].setCustomer(4, "Neha_Singh", 24, "Delhi","9876523456", 2, "Jio");

    c[4].setCustomer(5, "Riya_Shah", 26, "Pune","9876534567", 4, "BSNL");

// for loop to display the values stored in the objects
    for (int i = 0; i < 5; i++)
    {
        c[i].getCustomer();
    }

    return 0;
}


