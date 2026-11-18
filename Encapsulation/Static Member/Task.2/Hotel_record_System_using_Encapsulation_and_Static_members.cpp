// Write a Program to get and display Hotels and static information using Encapsulation 
// with an array of objects member by including the below-mentioned attributes

#include <iostream>
using namespace std;

class Hotel
{
// for declare private attributes
    int hotel_id;
    string hotel_type;
    string hotel_rating;
    string hotel_location;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
// for declare static variables
    static string hotel_name;
    static int hotel_establish_year;

// for Set Method
    void setHotel(int id, string type, string rating, string location,int staff, int room)
    {
// for assign values to private attributes
        this->hotel_id = id;
        this->hotel_type = type;
        this->hotel_rating = rating;
        this->hotel_location = location;
        this->hotel_staff_quantity = staff;
        this->hotel_room_quantity = room;
    }

// for Get Method
    void getHotel()
    {
        cout << endl;
        cout << ":--------------: The Hotel's Details :---------------:" << endl << endl;

        cout << "Hotel's Id - " << this->hotel_id << endl;
        cout << "Hotel's Name - " << Hotel::hotel_name << endl;
        cout << "Hotel's Type - " << this->hotel_type << endl;
        cout << "Hotel's Rating - " << this->hotel_rating << endl;
        cout << "Hotel's Location - " << this->hotel_location << endl;
        cout << "Hotel's Establish Year - " << Hotel::hotel_establish_year << endl;
        cout << "Hotel's Staff Quantity - " << this->hotel_staff_quantity << endl;
        cout << "Hotel's Room Quantity - " << this->hotel_room_quantity << endl;

        cout << ":-----------------------------------------------:" << endl << endl;
    }
};

// for Static variable value assigning
string Hotel::hotel_name = "The Taj Hotel";
int Hotel::hotel_establish_year = 1903;

int main()
{
// for create array of 5 Hotel objects
    Hotel h[5];

// for Set Hotel Details
    h[0].setHotel(101, "Hotel", "5 Star", "Mumbai", 150, 100);

    h[1].setHotel(102, "Hotel", "4 Star", "Delhi", 120, 80);

    h[2].setHotel(103, "Motel", "3 Star", "Surat", 50, 40);

    h[3].setHotel(104, "Hotel", "7 Star", "Ahmedabad", 200, 150);
    
    h[4].setHotel(105, "Motel", "6 Star", "Vadodara", 180, 120);
    
    

// for get and Display Hotel Details
    h[0].getHotel();
    h[1].getHotel();
    h[2].getHotel();
    h[3].getHotel();
    h[4].getHotel();

    return 0;
}

