// wap to convert seconds into hh:mm:ss using uncapsulation :-

#include <iostream>
using namespace std;

class Time
{
    int seconds;
    int hh, mm, ss;

public:
// for set second data and stores the total seconds in the private attribute seconds
    void setData(int sec)
    {
        this->seconds = sec;
    }

//for get second and convert into time 
    void getData()
    {
        this->hh = seconds / 3600;                      // for Calculate second into hours
        this->mm = (seconds % 3600) / 60;              // for Calculate second into remaining minutes  
        this->ss = seconds % 60;                       // for for calculate remaining seconds

        cout << "The Time is :- ";

        if (hh < 10)cout << "0";cout << hh << ":";    // for prints 0 before a single-digit hour

        if (mm < 10)cout << "0";cout << mm << ":";   // for prints 0 before a single-digit minute

        if (ss < 10)cout << "0";cout << ss << endl;  // for prints 0 before a single-digit second
    }
};

int main()
{
// for create object to the time class 
    Time t;
    int sec;

    cout << "Enter Total seconds: ";
    cin >> sec;

    t.setData(sec);
    t.getData();

    return 0;
}
