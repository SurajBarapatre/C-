#include <iostream>
using namespace std;

class Student
{
    int id, age, standard;
    string name, school, phoneNo;
    double percentage;
    char div;
    bool isPass;

public:

    Student(int id, int age, int standard, string name, string school,
            string phoneNo, double percentage, char div, bool isPass)
    {
        this->id = id;
        this->age = age;
        this->standard = standard;
        this->name = name;
        this->school = school;
        this->phoneNo = phoneNo;
        this->percentage = percentage;
        this->div = div;
        this->isPass = isPass;
    }

    Student()
    {
        cout << "-------------: Enter Student's Detail :------------" << endl << endl;

        cout << "Enter Student's Id :- ";
        cin >> this->id;

        cout << "Enter Student's Name :- ";
        cin >> this->name;

        cout << "Enter Student's Phone No :- ";
        cin >> this->phoneNo;

        cout << "Enter Student's School Name :- ";
        cin >> this->school;

        cout << "Enter Student's Std :- ";
        cin >> this->standard;

        cout << "Enter Student's Div :- ";
        cin >> this->div;

        cout << "Enter Student's Age :- ";
        cin >> this->age;

        cout << "Enter Student's Percentage :- ";
        cin >> this->percentage;

        cout << "Enter Student's Result Status (1 = Pass, 0 = Fail) :- ";
        cin >> this->isPass;
    }

    void getStudent()
    {
        cout << endl;
        cout << "--------------: Student's Detail :---------------" << endl << endl;

        cout << "Student's Id - " << this->id << endl;
        cout << "Student's Name - " << this->name << endl;
        cout << "Student's Phone No - " << this->phoneNo << endl;
        cout << "Student's School Name - " << this->school << endl;
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

int main()
{
    Student s1;                 

    s1.getStudent();            

    return 0;
}
