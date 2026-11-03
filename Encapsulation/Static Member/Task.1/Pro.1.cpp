#include <iostream>
#include <string>
using namespace std;

class Student
{
    int id, age, standard;
    string name, phoneNo;
    double percentage;
    char div;
    bool isPass;

public:
    static string school;       // static variable only declared in the class, do not assign value

    // Set Method
    void setStudent(int id, int age, int standard, string name,
                    string phoneNo, double percentage, char div, bool isPass)
    {
        this->id = id;
        this->age = age;
        this->standard = standard;
        this->name = name;
        this->phoneNo = phoneNo;
        this->percentage = percentage;
        this->div = div;
        this->isPass = isPass;
    }

    // Get Method
    void getStudent()
    {
        << endl;
        cout << "--------------: Student's Detail :---------------" << endl << endl;

        cout << "Student's Id - " << this->id << endl;
        cout << "Student's Name - " << this->name << endl;
        cout << "Student's Phone No - " << this->phoneNo << endl;
        cout << "Student's School Name - " << Student::school << endl;
        cout << "Student's Std - " << this->standard << endl;
        cout << "Student's Div - " << this->div << endl;
        cout << "Student's Age - " << this->age << endl;
        cout << "Student's Percentage - " << this->percentage << "%" << endl;

        if (this->isPass == true)
        {
            cout << "Student's Result - Pass" << endl << endl;
        }
        else
        {
            cout << "Student's Result - Failed" << endl << endl;
        }
    }
};

// for Static variable value assigning
string Student::school = "Shubhangi Public School";

int main()
{
    // Array of Objects
    Student s[4];

    // for Set Student Details
    s[0].setStudent(111, 17, 11, "Suraj", "7874692196", 90.96, 'A', true);

    s[1].setStudent(112, 18, 12, "Rupali", "9876543210", 85.50, 'B', true);

    s[2].setStudent(113, 17, 11, "Sadhana", "9876543211", 65.50, 'C', true);

    s[3].setStudent(114, 18, 12, "Kunjan", "9876543212", 35.50, 'D', false);

    // for Display Student Details
    s[0].getStudent();
    s[1].getStudent();
    s[2].getStudent();
    s[3].getStudent();

    return 0;
}
