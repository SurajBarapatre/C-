//wap to create a employee class and minimum 6 attributes, also create methods 
// to set and get data with different variables using encapsulation principals :-

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
// for assign values to the private attributes
    void setEmployee(int id, string name, string dept,string desig, double sal, string location)
    {
// for refers to class attributes
        this->empId = id;
        this->empName = name;          // for refers to the parameter passed in the function          
        this->department = dept;
        this->designation = design;
        this->salary = sal;
        this->city = location;
    }
    
// for get Employee details
    void getEmployee()
    {
        cout << "The Employee ID is :- " << this->empId << endl;
        cout << "The Employee Name is :- " << this->empName << endl;
        cout << "The Department is :- " << this->department << endl;
        cout << "The Designation is :- " << this->designation << endl;
        cout << "The Salary is :- Rs." << this->salary << endl;
        cout << "The City is = " << this->city << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
// for display the values stored in the object 
    Employee a1, a2, a3;

    a1.setEmployee(101, "Mrs.Rupali Bhagwat", "IT","Developer",85000, "Delhi");

    a2.setEmployee(102, "Ms.Sadhana Salunke", "HR","Manager", 80000, "Mumbai");

    a3.setEmployee(103, "Mr.Kunjan Singh ", "Sales","Executive",70000, "Ahmedabad");

    a1.getEmployee();
    a2.getEmployee();
    a3.getEmployee();

    return 0;
}
