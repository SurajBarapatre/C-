// wap to convert inches into feet using class and object :-

#include <iostream>
using namespace std;

class Converter
{
public:
	
    float inches, feet;
    
// for assign the inches value     
    void setData(float i)                   
    {
        inches = i;
    }

// for convert inches into feet and display result
	void getData()
    {
        feet = inches / 12;

        cout << "Your Inches is = " << inches << endl;
        cout << "Your Feet is = " << feet << endl;
    }
};

int main()
{
 // for Create object  
	Converter c;

    float i;

    cout << "Enter The inches :- ";
    
    cin >> i;

    c.setData(i);
    c.getData();

    return 0;
}
