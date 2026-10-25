// wap to convert seconds into hh:mm:ss using class and object :-
#include <iostream>
using namespace std;

class Time
{
public:
    int seconds, hh, mm, ss;

// for set second data
    void setData(int s)
    {
        seconds = s;
    }

// for get second and convert into time 
    void getData()
    {
        hh = seconds / 3600;              // for Calculate second into hours 
        mm = (seconds % 3600) / 60;       // for Calculate second into remaining minutes
        ss = seconds % 60;                // for for calculate remaining seconds 

        cout << "Your Time is :- ";

        if (hh < 10)cout << "0"; cout << hh << ":";  // for prints 0 before a single-digit hour

        if (mm < 10)cout << "0";cout << mm << ":";   // for prints 0 before a single-digit minute

        if (ss < 10)cout << "0";cout << ss << endl; // for prints 0 before a single-digit second
    }
};

int main()
{
    Time t; int s;

    cout << "Enter total seconds :- ";
    
    cin >> s;

    t.setData(s);
    t.getData();

    return 0;
}
