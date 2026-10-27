//wap to create a employee class and minimum 6 attributes, also create methods 
// to set and get data with different variables using encapsulation principals with constructor and destructor

#include <iostream>
using namespace std;

class Employee
{
    int empId;
    string empName;
    string department;
    string designation;
    double salary;
    string city;

public:

// constructor for display welcome message when create objects
    Employee()
    {
        cout << "Welcome to Shubhangi Group of Industries !" << endl;
        cout << "*--------------------------------*" << endl;
        cout << endl;
    }

// parameterized constructor for set attributes when object is created 
    Employee(int empId, string empName, string department,string designation, double salary, string city)
    {
        this->empId = empId;
        this->empName = empName;
        this->department = department;
        this->designation = designation;
        this->salary = salary;
        this->city = city;
    }

// for set data of employee details
    void setEmployee(int id, string name, string dept,string desig, double sal, string location)
    {
        this->empId = id;
        this->empName = name;
        this->department = dept;
        this->designation = desig;
        this->salary = sal;
        this->city = location;
    }

// For get data of employee details
    void getEmployee()
    {
        cout << "Employee ID is :- " << this->empId << endl;
        cout << "Employee Name is :- " << this->empName << endl;
        cout << "Employee Department is :- " << this->department << endl;
        cout << "Employee Designation is :- " << this->designation << endl;
        cout << "Employee Salary is :- Rs. " << this->salary << endl;
        cout << "Employee City is :- " << this->city << endl;
        cout << "----------------------------------------" << endl;
        cout << endl;
    }

// destructor for run automatically when each object is destroyed
    ~Employee()
    {
        cout << "Thanks for visiting Shubhangi Group of Industries !" << endl;
    }
};

int main()
{
// Objects using for default constructor
    Employee a1, a2;

    a1.setEmployee(101, "Mrs.Rupali Bhagwat", "IT","Developer",85000, "Delhi");

    a2.setEmployee(102, "Ms.Sadhana Salunke", "HR","Manager", 80000, "Mumbai");

    a1.getEmployee();
    a2.getEmployee();

// Object using for parameterized constructor
    Employee a3(103, "Mr.Kunjan Singh ", "Sales","Executive",70000, "Ahmedabad");

    a3.getEmployee();

    return 0;
}
