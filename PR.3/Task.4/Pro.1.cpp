// WAP to solve ambiguity error

#include <iostream>
using namespace std;

class Employee                              // class Employee for store employee id
{
public:
	
    int id = 001;
};

class Manager : public Employee             // for class Manager inherit class employee
{
public:
	
    int salary = 70000;
};

class Developer : public Employee           // for class Developer inherit class Employee
{
public:
	
    int bonus = 15000;
};

class Company : public Manager, public Developer  // for class Company inherit Manager and Developer
{
public:
	
    int total = 85000;

    void get()
    {
        // for scope resolution operator to solve ambiguity error

        cout << "The Employee ID is :- " << Manager::id << endl;   // cout << id << endl; this is the ambiguity error
        cout << endl;                                             // for tells the compiler to access the id inherited through the Manager class

        cout << "The Employee Salary is :- " << salary << endl;
        cout << endl;

        cout << "The Employee Bonus is :- " << bonus << endl;
        cout << endl;

        cout << "The Employee Total Salary is :- " << total << endl;
    }
};

int main()
{
    Company c1;                              // for create object

    c1.get();                                // for get and display all data to user

    return 0;
}

