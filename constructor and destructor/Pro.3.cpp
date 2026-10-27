//wap to create a student class and minimum 6 attributes, also create methods 
// to set and get data with different variables using encapsulation principals with constructor and destructor

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

// constructor for display welcome message when create objects
    Student()
    {
        cout << "Welcome to Shubhangi College !" << endl;
        cout << "*----------------------------*" << endl;
        cout << endl;
    }

// parameterized constructor for set attributes when object is created
    Student(int rollNo, string studentName, string course,string division, double percentage, string city)
    {
        this->rollNo = rollNo;
        this->studentName = studentName;
        this->course = course;
        this->division = division;
        this->percentage = percentage;
        this->city = city;
    }

// for set data of student details
    void setStudent(int rno, string name, string crs,string div, double per, string location)
    {
        this->rollNo = rno;
        this->studentName = name;
        this->course = crs;
        this->division = div;
        this->percentage = per;
        this->city = location;
    }

// for get data of student details
    void getStudent()
    {
        cout << "Student Roll No is :- " << this->rollNo << endl;
        cout << "Student Name is :- " << this->studentName << endl;
        cout << "Student Course is :- " << this->course << endl;
        cout << "Student Division is :- " << this->division << endl;
        cout << "Student Percentage is :- " << this->percentage << "%" << endl;
        cout << "Student City is :- " << this->city << endl;
        cout << "----------------------------------------" << endl;
        cout << endl;
    }

//destructor for run automatically when each object is destroyed
    ~Student()
    {
        cout << "Thanks for visiting Shubhangi College!" << endl;
    }
};

int main()
{
// Objects using for default constructor
    Student a1, a2;

    a1.setStudent(1, "Sadhana Salunke", "BCA", "A", 93.50, "Delhi");

    a2.setStudent(2, "Rupali Bhagwat", "IIT", "A+", 95.25, "Mumbai");

    a1.getStudent();
    a2.getStudent();

// Object using for parameterized constructor
    Student a3(3, "Kunjan Singh", "MCA", "A", 94.60, "Ahemdabad");

    a3.getStudent();

    return 0;
}
