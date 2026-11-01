// Write a Program to display the salary of different employees using hierarchical inheritance.
// Class Employee contains salary attribute and getSalary() method.
// Class Manager inherits Employee.
// Class Developer inherits Employee.
// Class Clerk inherits Employee.

#include <iostream>
using namespace std;

class Employee                               // for parent class
{
protected:
	
    float salary;

public:
    void getSalary()                         // for display salary
    {
        cout << salary << endl;
    }
};

class Manager : public Employee                  // for child class Manager inherit to parent class employee
{
public:
    void getManager()
    {
        salary = 50000;

        cout << "The Salary of Manager is :- ";
        Employee::getSalary();
		cout << endl;                  // for calls the parent class method to display the salary
    }
};

class Developer : public Employee           // for child class devloper inherit to parent class employee
{
public:
    void getDeveloper()
    {
        salary = 40000;

        cout << "The Salary of Developer is :- ";
        Employee::getSalary();   
		cout << endl;            // for calls the parent class method to display the salary
    }
};

class Clerk : public Employee               // for child class clerk inherit to parent class employee
{
public:
    void getClerk()
    {
        salary = 25000;

        cout << "The Salary of Clerk is :- ";
        Employee::getSalary();                // for calls the parent class method to display the salary
    }
};

int main()
{
    Manager m1;                              // for create Manager object
    Developer d1;                            // for create Developer object
    Clerk c1;                                // for create Clerk object

    m1.getManager();                        // for get value and display of manager
    d1.getDeveloper();                      // for get value and display of developer
    c1.getClerk();                          // for get value and display of clerk

    return 0;
}
