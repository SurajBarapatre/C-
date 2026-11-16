//Write a Program to read and print Employee information with the use of Multilevel inheritance.

#include <iostream>
using namespace std;

class A                                      // class A for store employee information
{
protected:
	
    int id;
    char name[50], role[50], salary[50], experience[50];
    char comp_name[50], address[100], email[50], contact[15];

public:
    void setBasicDetails()                   // for set employee id, name and role
    {
        cout << "Enter The Employee ID is :- ";
        cin >> id;

        cout << "Enter The Employee Name is :- ";
        cin >> name;

        cout << "Enter The Employee Role is :- ";
        cin >> role;
    }
};

class B : public A                           // for class B inherits class A
{
public:
    void setSalaryExperience()               // for set employee salary and experience
    {
        cout << "Enter The Employee Salary is:- ";
        cin >> salary;

        cout << "Enter The Employee Experience is:- ";
        cin >> experience;
    }
};

class C : public B                           // for class C inherits class B
{
public:
    void setCompanyDetails()                 // for set company name and address
    {
        cout << "Enter The Company Name is :- ";
        cin >> comp_name;

        cout << "Enter The Company Address is :- ";
        cin >> address;
    }

    void getEmployeeDetails()                // for get and display name, role and salary
    {
        cout << ":-------Employee Basic Details-------:" << endl;
        cout << endl;
        cout << "The Employee Name is :- " << name << endl;
        cout << "The Employee Role is :- " << role << endl;
        cout << "The Employee Salary is :- " << salary << endl;
        cout << endl;
    }
};

class D : public C                           // for class D inherits class C
{
public:
    void setContactDetails()                 // for set employee email and contact
    {
        cout << "Enter The Employee Email is :- ";
        cin >> email;

        cout << "Enter The Employee Contact is :- ";
        cin >> contact;
        cout << endl;
    }

    void getAllDetails()                     // for get and display all employee details
    {
        cout << ":-------Employee Information-------:" << endl;
		cout << endl;
        cout << "The Employee ID is :- " << id << endl;
        cout << "The Employee Name is :- " << name << endl;
        cout << "The Employee Role is :- " << role << endl;
        cout << "The Employee Salary is :- " << salary << endl;
        cout << "The Employee Experience is :- " << experience << endl;
        cout << "The Company Name is :- " << comp_name << endl;
        cout << "The Company Address is :- " << address << endl;
        cout << "The Employee Email is :- " << email << endl;
        cout << "The Employee Contact is :- " << contact << endl;

        cout << ":-------------------------------------------:" << endl;
    }
};

int main()
{
    D d1;                                    // for create object of class D

    cout << ":-------Enter Employee Details-------:" << endl;
    cout << endl;

    d1.setBasicDetails();                    // for call set of class A
    d1.setSalaryExperience();                // for call set of class B
    d1.setCompanyDetails();                  // for call set of class C
    d1.setContactDetails();                  // for call set of class D

    d1.getEmployeeDetails();                 // for get and display name, role and salary
    d1.getAllDetails();                      // for get and display all employee information

    return 0;
}

