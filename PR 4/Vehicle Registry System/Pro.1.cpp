// Develop a Vehicle Registry System using C++ that demonstrates all types of inheritance and encapsulation. 
// The system will allow users to manage a registry of different types of vehicles.

#include <iostream>
#include <string>
using namespace std;

// Base Vehicle Class
class Vehicle
{
// Private Data Members
    int vehicleID;
    string manufacturer;
    string model;
    int year;

    public:
// Static Member for Count Total Vehicles
        static int totalVehicles;

// Default Constructor
        Vehicle()
        {
// Assign Default Values
            this->vehicleID = 0;
            this->manufacturer = "";
            this->model = "";
            this->year = 0;

// Increase Vehicle Count
            totalVehicles++;
        }

// Parameterized Constructor
        Vehicle(int id, string manu, string mod, int yea)
        {
            this->vehicleID = id;
            this->manufacturer = manu;
            this->model = mod;
            this->year = yea;

// Increase Vehicle Count
            totalVehicles++;
        }

// Set Function for Set Vehicle Details
        void setVehicle(int id, string manu, string mod, int yea)
        {
            this->vehicleID = id;
            this->manufacturer = manu;
            this->model = mod;
            this->year = yea;
        }

// Get Function For Display Vehicle Details
        void getVehicle()
        {
            cout << "The Vehicle ID is:- " << this->vehicleID;
            cout << "The Vehicle Manufacturer is:- " << this->manufacturer;
            cout << "The Vehicle Model is:- " << this->model;
            cout << "The Vehicle Register Year is:- " << this->year;
        }

// Function to Check Vehicle ID for Searching
        bool checkVehicleID(int id)
        {
// Compare Given ID with Vehicle ID
            return this->vehicleID == id;
        }

// Virtual Display Function for call to derived class function from bass class
        virtual void display()
        {
// Call Get Function
            this->getVehicle();
        }

// Virtual Destructor for derived class object destroy in bass class pointer
        virtual ~Vehicle()
        {
// Decrease Vehicle Count When Object is Destroyed
            totalVehicles--;
        }
};

// Initialize Static Member
int Vehicle::totalVehicles = 0;


// Single Inheritance :-

// Car Class Inherit to Vehicle Class
class Car : public Vehicle
{
// Private Data Member
    string fuelType;

    public:

// Default Constructor
        Car()
        {
            this->fuelType = "";
        }

// Set Function for Set Car Details
        void setCar(int id, string manu, string mod, int yea, string fuel)
        {
// Set Base Class Data Members
            this->setVehicle(id, manu, mod, yea);

// Set Car Data Member
            this->fuelType = fuel;
        }

// Get Function to Display Car Details
        void getCar()
        {
// Display Vehicle Details
            this->getVehicle();

// Display Car Details
            cout << "The Fuel Type is:- " << this->fuelType;
        }

// Override Display Function for Car Object Details
        void display()
        {
            this->getCar();
        }
};


// Multilevel Inheritance :-

// ElectricCar Class Inherit to Car Class
class ElectricCar : public Car
{
// Private Data Member
    float batteryCapacity;

    public:

// Default Constructor
        ElectricCar()
        {
            this->batteryCapacity = 0;
        }

// Set Function for Set Electric Car Details
        void setElectricCar(int id, string manu, string mod, int yea,
                            string fuel, float battery)
        {
// Set Car Details
            this->setCar(id, manu, mod, yea, fuel);

// Set Battery Capacity
            this->batteryCapacity = battery;
        }

// Get Function to Display Electric Car Details
        void getElectricCar()
        {
// Display Car Details
            this->getCar();

// Display Battery Capacity
            cout << "The Battery Capacity is:- "
                 << this->batteryCapacity << " kWh";
        }

// Override Display Function for Electric Car Object Details
        void display()
        {
            this->getElectricCar();
        }
};


// Multilevel Inheritance :-

// SportsCar Class Inherit to ElectricCar Class
class SportsCar : public ElectricCar
{
// Private Data Member
    int topSpeed;

    public:

// Default Constructor
        SportsCar()
        {
            this->topSpeed = 0;
        }

// Set Function for Set Sports Car Details
        void setSportsCar(int id, string manu, string mod, int yea,
                          string fuel, float battery, int speed)
        {
// Set Electric Car Details
            this->setElectricCar(id, manu, mod, yea, fuel, battery);

// Set Top Speed
            this->topSpeed = speed;
        }

// Get Function to Display Sports Car Details
        void getSportsCar()
        {
// Display Electric Car Details
            this->getElectricCar();

// Display Top Speed
            cout << "The Car Top Speed is:- "
                 << this->topSpeed << " km/h";
        }

// Override Display Function for Sports Car Object Details
        void display()
        {
            this->getSportsCar();
        }
};


// Hierarchical Inheritance :-

// Sedan Class Inherit to Car Class
class Sedan : public Car
{
    public:

// Set Function to Set Sedan Details
        void setSedan(int id, string manu, string mod, int yea, string fuel)
        {
// Set Car Details
            this->setCar(id, manu, mod, yea, fuel);
        }

// Get Function to Display Sedan Details
        void getSedan()
        {
// Display Car Details
            this->getCar();
        }

// Override Display Function for Sedan Object Details
        void display()
        {
            this->getSedan();
        }
};


// Hierarchical Inheritance :-

// SUV Class Inherit to Car Class
class SUV : public Car
{
    public:

// Set Function to Set SUV Details
        void setSUV(int id, string manu, string mod, int yea, string fuel)
        {
// Set Car Details
            this->setCar(id, manu, mod, yea, fuel);
        }

// Get Function to Display SUV Details
        void getSUV()
        {
// Display Car Details
            this->getCar();
        }

// Override Display Function for SUV Object Details
        void display()
        {
            this->getSUV();
        }
};


// Base Class for Multiple Inheritance
class Aircraft
{
// Private Data Member
    float flightRange;

    public:

// Default Constructor
        Aircraft()
        {
            this->flightRange = 0;
        }

// Set Function to Set Aircraft Details
        void setAircraft(float range)
        {
            this->flightRange = range;
        }

// Get Function to Display Aircraft Details
        void getAircraft()
        {
            cout << "The Flight Range is:- "
                 << this->flightRange << " kmph";
        }
};


// Multiple Inheritance :-

// FlyingCar Inherit to Car and Aircraft Classes
class FlyingCar : public Car, public Aircraft
{
    public:

// Set Function for Set Flying Car Details
        void setFlyingCar(int id, string manu, string mod, int yea,
                          string fuel, float range)
        {
// Set Car Details
            this->setCar(id, manu, mod, yea, fuel);

// Set Aircraft Details
            this->setAircraft(range);
        }

// Get Function for Display Flying Car Details
        void getFlyingCar()
        {
// Display Car Details
            this->getCar();

// Display Aircraft Details
            this->getAircraft();
        }

// Override Display Function for Flying Car Object Details
        void display()
        {
            this->getFlyingCar();
        }
};


// Vehicle Registry Class
class VehicleRegistry
{
// Array of Vehicle Pointers
    Vehicle *vehicles[100];

// Variable to Store Total Registered Vehicles
    int total;

    public:

// Default Constructor
        VehicleRegistry()
        {
// when No Vehicle is Registered
            this->total = 0;
        }

// Function to Add Vehicle in Registry
        void addVehicle()
        {
// Check for Registry Capacity
            if(this->total >= 100)
            {
                cout << "The Registry is Full !";
                return;
            }

// Variable to Store Vehicle Type
            int type;

// Ask User to Select Vehicle Type
            cout << "Enter 1 for Car." << endl;
            cout << "Enter 2 for Electric Car." << endl;
            cout << "Enter 3 for Sports Car." << endl;
            cout << "Enter 4 for Sedan." << endl;
            cout << "Enter 5 for SUV." << endl;
            cout << "Enter 6 for Flying Car." << endl;
            cout << endl;
            cout << "Enter Your Choice :- ";
            cin >> type;

// Variables to Store Common Vehicle Details
            int id, yea;
            string manu, mod, fuel;

// User to Enter Common Vehicle Details
            cout << "Enter The Vehicle ID :- ";
            cin >> id;

            cout << "Enter The Vehicle Manufacturer :- ";
            cin >> manu;

            cout << "Enter The Vehicle Model :- ";
            cin >> mod;

            cout << "Enter The Register Year :- ";
            cin >> yea;

// Create Base Class Pointer
            Vehicle *v = NULL;

// Check Selected Vehicle Type
            switch(type)
            {
                case 1:
                {
// Create Car Object Using New Operator
                    Car *c = new Car();

//for Fuel Type
                    cout << "Enter Fuel Type :- ";
                    cin >> fuel;
                    cout << endl;

// Set Car Details
                    c->setCar(id, manu, mod, yea, fuel);

// Store Car Address in Base Class Pointer
                    v = c;
                    break;
                }

                case 2:
                {
// Create Electric Car Object Using New Operator
                    ElectricCar *e = new ElectricCar();

// Variables to Store Electric Car Details
                    float battery;

//for Fuel Type and Battery Capacity
                    cout << "Enter Fuel Type :- ";
                    cin >> fuel;

                    cout << "Enter Battery Capacity :- ";
                    cin >> battery;
                    cout << endl;

// Set Electric Car Details
                    e->setElectricCar(id, manu, mod, yea, fuel, battery);

// Store Electric Car Address in Base Class Pointer
                    v = e;
                    break;
                }

                case 3:
                {
// Create Sports Car Object Using New Operator
                    SportsCar *s = new SportsCar();

// Variables to Store Sports Car Details
                    float battery;
                    int speed;

// for Sports Car Details
                    cout << "Enter Fuel Type :- ";
                    cin >> fuel;

                    cout << "Enter Battery Capacity :- ";
                    cin >> battery;

                    cout << "Enter Top Speed :- ";
                    cin >> speed;
                    cout << endl;

// Set Sports Car Details
                    s->setSportsCar(id, manu, mod, yea, fuel, battery, speed);

// Store Sports Car Address in Base Class Pointer
                    v = s;
                    break;
                }

                case 4:
                {
// Create Sedan Object Using New Operator
                    Sedan *sd = new Sedan();

// for Fuel Type
                    cout << "Enter Fuel Type :- ";
                    cin >> fuel;

// Set Sedan Details
                    sd->setSedan(id, manu, mod, yea, fuel);

// Store Sedan Address in Base Class Pointer
                    v = sd;
                    break;
                }

                case 5:
                {
// Create SUV Object Using New Operator
                    SUV *su = new SUV();

// for Fuel Type
                    cout << "Enter Fuel Type :- ";
                    cin >> fuel;
                    cout << endl;

// Set SUV Details
                    su->setSUV(id, manu, mod, yea, fuel);

// Store SUV Address in Base Class Pointer
                    v = su;
                    break;
                }

                case 6:
                {
// Create Flying Car Object Using New Operator
                    FlyingCar *f = new FlyingCar();

// Variable to Store Flight Range
                    float range;

// for Fuel Type and Flight Range
                    cout << "Enter Fuel Type :- ";
                    cin >> fuel;

                    cout << "Enter Flight Range :- ";
                    cin >> range;
                    cout << endl;

// Set Flying Car Details
                    f->setFlyingCar(id, manu, mod, yea, fuel, range);

// Store Flying Car Address in Base Class Pointer
                    v = f;
                    break;
                }

                default:
                {
// Display Message for Invalid Vehicle Type
                    cout << "Enter Valid Vehicle Type !";
                    return;
                    cout << endl;
                }
            }

// Check Whether Vehicle Object is Created
            if(v != NULL)
            {
// Store Vehicle Address in Pointer Array
                this->vehicles[this->total] = v;

// Increase Registered Vehicle Count
                this->total++;

// Display Success Message
                cout << "The Vehicle Added Successfully !";
                cout << endl;
            }
        }

// Function to Display All Registered Vehicles
        void displayAllVehicles()
        {
// Check Whether Registry is Empty
            if(this->total == 0)
            {
                cout << "No Vehicles Found!";
            }
            else
            {
                cout << ":-------VEHICLE REGISTRY SYSTEM--------:";

// For Loop to Through All Registered Vehicles
                for(int i = 0; i < this->total; i++)
                {
                    cout << "Vehicle " << i + 1;

// Call Display Function Using Base Class Pointer

// Virtual Function Calls the Derived Class Display Function
                    this->vehicles[i]->display();

                    cout << endl;
                }
            }
        }

// Function to Search Vehicle Using Vehicle ID
        void searchVehicle()
        {
// Variable to Store Vehicle ID
            int id;

// User to Enter Vehicle ID
            cout << "Enter Vehicle ID :- ";
            cin >> id;

// Variable to Check Whether Vehicle is Found
            int found = 0;

// For Loop to Through All Registered Vehicles
            for(int i = 0; i < this->total; i++)
            {
// Check Vehicle ID
                if(this->vehicles[i]->checkVehicleID(id))
                {
// Display Vehicle Found Message
                    cout << "The Vehicle is Found!";

// Display Vehicle Details
                    this->vehicles[i]->display();

// Update Found Status
                    found = 1;

// Stop Searching After Finding Vehicle
                    break;
                }
            }

// Check Whether Vehicle is Not Found
            if(found == 0)
            {
                cout << "The Vehicle is Not Found!";
            }
        }

// Destructor to Delete All Created Objects
        ~VehicleRegistry()
        {
// For Loop to Through All Registered Vehicles
            for(int i = 0; i < this->total; i++)
            {
// Delete Vehicle Object Using Delete Operator
                delete this->vehicles[i];
            }
        }
};


int main()
{
// Create Vehicle Registry Object
    VehicleRegistry v1;

// Variable to Store Menu Choice
    int choice;

// Variable to Control Program Loop
    bool isOn = true;

    cout << "Welcome to Vehicle Registry System" << endl;
    cout << endl;

// Do-While Loop for display Menu
    do
    {
// Display Menu Options
        cout << "Enter 1 to add vehicle." << endl;
        cout << "Enter 2 to display all vehicle." << endl;
        cout << "Enter 3 to search vehicle by id." << endl;
        cout << "Enter 4 to exit." << endl;
        cout << endl;

// Ask User to Enter Choice
        cout << "Enter your choice :- ";
        cin >> choice;
        cout << endl;

// Switch Case for Menu Selection
        switch(choice)
        {
            case 1:
            {
// Call Add Vehicle Function for add vehicle
                v1.addVehicle();
                break;
            }

            case 2:
            {
// Call Display All Vehicles Function for display all vehicles
                v1.displayAllVehicles();
                break;
            }

            case 3:
            {
// Call Search Vehicle Function for find added vehicles
                v1.searchVehicle();
                break;
            }

            case 4:
            {
                isOn = false;

// Display Exit Message
                cout << "The Program was Exited !";
                break;
            }

            default:
            {
// Display Message for Invalid Choice
                cout << "Enter The Valid Input !";
                break;
            }
        }

// Repeat Menu While isOn is True
    } while(isOn);

// Display Total Vehicle Count
    cout << "The Total Vehicles is:- " << Vehicle::totalVehicles;

    return 0;
}


