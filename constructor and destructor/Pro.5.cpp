// wap to convert seconds into hh:mm:ss using encapsulation principals with constructor and destructor
#include <iostream>
using namespace std;

class Time
{
    int seconds;
    int hours;
    int minutes;
    int remainingSeconds;

public:
// constructor for display welcome message when create objects
    Time()
    {
        cout << "Welcome to Seconds to Time Converter!" << endl;
        cout << "--------------------------------------" << endl << endl;
    }

// parameterized constructor for converts seconds when a3 is created with value
    Time(int sec)
    {
        this->seconds = sec;

        this->hours = sec / 3600;                         // for Calculate second into hours                        
        this->minutes = (sec % 3600) / 60;                // for Calculate second into remaining minutes 
        this->remainingSeconds = sec % 60;                // for for calculate remaining seconds
    }

 // for sets the seconds and calculates the time
    void setSeconds(int sec)
    {
        this->seconds = sec;

        this->hours = sec / 3600;
        this->minutes = (sec % 3600) / 60;
        this->remainingSeconds = sec % 60;
    }

// for get second and convert into time and display 
    void getTime()
    {
        cout << "Total Seconds is :- " << seconds << endl;
        
        cout <<"Your Time is :- ";

        if (hours < 10)cout << "0";cout << hours << ":";                // for prints 0 before a single-digit hour

        if (minutes < 10)cout << "0";cout << minutes << ":";           // for prints 0 before a single-digit minute

        if (remainingSeconds < 10)cout << "0";cout << remainingSeconds << endl;  // for prints 0 before a single-digit second

        cout << "--------------------------------------" << endl;
        cout << endl;
    }

//destructor for run automatically when each object is destroyed
    ~Time()
    {
        cout << "Thank you for using the converter!" << endl;
    }
};

int main()
{
// for default constructor objects
    Time a1, a2;

 // for set values using set method
    a1.setSeconds(3665);
    a2.setSeconds(5643);

 // for Display values using get method
    a1.getTime();
    a2.getTime();

 // for parameterized constructor object
    Time a3(48193);
    a3.getTime();

    return 0;
}
