// wap to create a Employee class and minimum 6 attributes, also create methods to set and get data :-
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int employeeId;
    string employeeName;
    string department;
    string designation;
    double salary;
    string city;

// For Set employee data
    void setEmployee(int id, string name, string dept,string design, double sal, string c)
    {
        employeeId = id;
        employeeName = name;
        department = dept;
        designation = design;
        salary = sal;
        city = c;
    }

// for Get and display employee data
    void getEmployee()
    {
        cout << "Employee ID :- " << employeeId << endl;
        cout << "Employee Name :- " << employeeName << endl;
        cout << "Department :- " << department << endl;
        cout << "Designation :- " << designation << endl;
        cout << "Salary :- Rs. " << salary << endl;
        cout << "City :- " << city << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    Employee a, b, c;

    a.setEmployee(101, "Rupali Bhagwat", "IT","Developer", 65000, "Pune");

    b.setEmployee(102, "Sadhana Salunke", "HR","Manager", 70000, "Mumbai");

    c.setEmployee(103, "Kunjan Singh", "Sales","Executive", 60000, "Nashik");

    a.getEmployee();
    b.getEmployee();
    c.getEmployee();

    return 0;
}
