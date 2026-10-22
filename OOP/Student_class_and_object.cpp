// wap to create a Student class and minimum 6 attributes, also create methods to set and get data :-
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string studentName;
    string course;
    string division;
    double percentage;
    string city;

// For Set student data
    void setStudent(int rno, string name, string crs,string div, double per, string c)
    {
        rollNo = rno;
        studentName = name;
        course = crs;
        division = div;
        percentage = per;
        city = c;
    }

// For Get and display student data
    void getStudent()
    {
        cout << "Roll No :- " << rollNo << endl;
        cout << "Student Name :- " << studentName << endl;
        cout << "Course :- " << course << endl;
        cout << "Division :- " << division << endl;
        cout << "Percentage :- "<< percentage << "%" << endl;
        cout << "City :- " << city << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    Student a, b, c;

    a.setStudent(1, "Sadhana", "BCA", "A", 93.50, "Pune");
    b.setStudent(2, "Rupali", "IIT", "B", 95.25, "Mumbai");
    c.setStudent(3, "Kunjan", "MCA", "A", 94.60, "Nashik");

    a.getStudent();
    b.getStudent();
    c.getStudent();

    return 0;
}
