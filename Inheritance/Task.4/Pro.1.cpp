// Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors

#include <iostream>
using namespace std;

class Student                  // for store contains the rollNo variables
{
public:
	
    int rollNo = 007;
};

// for inherit student marks
class Exam : public Student  // for class Exam inherits class using public class Student
{
public:
	
    int marks = 80;
};

// for inherit student score
class Sports : public Student  // for class Exam inherits class using public class Student
{
public:
	
    int score = 90;
};

// the ambiguity error is result received two copies of Student,so compiler cannot decide which Rollno to use if we write only Rollno

class Result : public Exam, public Sports   // for get inheritance to class Exam and class Sports
{
public:
	
    int total = 170;

    void get()
    {
// for Scope resolution operator solves ambiguity to tell compiler to use the Rollno inherited from sports class

    cout << "The Student Roll Number is :- " << Sports::rollNo << endl;
    cout << endl;

    cout << "Student's Marks is :-" << marks << endl;
    cout << endl;
        
    cout << "Student's Sports Score is :- " << score << endl;
    cout << endl;
        
    cout << "The Student Total is :- " << total << endl;
    }
};

int main()
{
    Result r;                // for create object

    r.get();              // for get and display all data to user

    return 0;
}
