// Write a Program to create Student Record System for 5 students using Encapsulation. 
// Consider the below-mentioned attributes in the Student class

#include <iostream>
using namespace std;

class Student
{
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
// for assign values to the private attributes
    void setStudent(int id, string name, int age, string course,string city, string email, string college)
    {
// for refer to class attributes
        this->stu_id = id;
        this->stu_name = name;
        this->stu_age = age;
        this->stu_course = course;
        this->stu_city = city;
        this->stu_email = email;
        this->stu_college = college;
    }

// for get and display student details
    void getStudent()
    {
        cout << ":------- The Student Details -------:" << endl;
        cout << endl;

        cout << "The Student ID is :- " << this->stu_id << endl;
        cout << "The Student Name is :- " << this->stu_name << endl;
        cout << "The Student Age is :- " << this->stu_age << endl;
        cout << "The Student Course is :- " << this->stu_course << endl;
        cout << "The Student City is :- " << this->stu_city << endl;
        cout << "The Student Email is :- " << this->stu_email << endl;
        cout << "The Student College is :- " << this->stu_college << endl;

        cout << ":----------------------------------:" << endl;
        cout << endl;
    }
};

int main()
{
// for create array of 5 Student objects
    Student s[5];

// for assign values to 5 student objects
    s[0].setStudent(1, "Rahul_Sharma", 20, "BCA", "Surat","rahul@gmail.com", "ABC_College");

    s[1].setStudent(2, "Priya_Patel", 21, "MCA", "Ahmedabad","priya@gmail.com", "XYZ_College");

    s[2].setStudent(3, "Amit_Kumar", 19, "BBA", "Mumbai","amit@gmail.com", "PQR_College");

    s[3].setStudent(4, "Neha_Singh", 22, "BCA", "Delhi","neha@gmail.com", "LMN_College");

    s[4].setStudent(5, "Riya_Shah", 20, "MCA", "Pune","riya@gmail.com", "DEF_College");

// for loop to display the values stored in the objects
    for (int i = 0; i < 5; i++)
    {
        s[i].getStudent();
    }

    return 0;
}


