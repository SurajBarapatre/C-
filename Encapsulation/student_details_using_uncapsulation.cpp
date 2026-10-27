//wap to create a student class and minimum 6 attributes, also create methods 
// to set and get data with different variables using encapsulation principals :-

#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string studentName;
    string course;
    string division;
    double percentage;
    string city;

public:
// for assign values to the private attributes
    void setStudent(int rno, string name, string crs,string div, double per, string location)
    {
// // for refers to class attributes 
        this->rollNo = rno;                           // for assigns the parameter rno to the class attribute rollNo.in function
        this->studentName = name;
        this->course = crs;
        this->division = div;
        this->percentage = per;
        this->city = location;
    }

// for get data student details 
    void getStudent()
    {
        cout << "The Roll No is :- " << this->rollNo << endl;
        cout << "The Student Name is :- " << this->studentName << endl;
        cout << "The Course is :- " << this->course << endl;
        cout << "The Division is :- " << this->division << endl;
        cout << "The Percentage is :- " << this->percentage << "%" << endl;
        cout << "The City is = " << this->city << endl;
        cout << "--------------------------------" << endl;
    }
};

int main()
{
// for display the values stored in the object 
    Student a1, a2, a3;

    a1.setStudent(1, "Sadhana Salunke", "BCA", "A", 93.50, "Delhi");
    a2.setStudent(2, "Rupali Bhagwat", "IIT", "A+", 95.25, "Mumbai");
    a3.setStudent(3, "Kunjan Singh", "MCA", "A", 94.60, "Ahemdabad");

    a1.getStudent();
    a2.getStudent();
    a3.getStudent();

    return 0;
}
