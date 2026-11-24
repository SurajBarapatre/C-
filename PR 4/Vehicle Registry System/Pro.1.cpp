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
        vehicleID = 0;
        manufacturer = "Not Available";
        model = "Not Available";
        year = 0;
// Increase Vehicle Count
        totalVehicles++;
        }
// Parameterized Constructor
        Vehicle(int id, string manu, string mod, int yea)
        {
// Initialize for Data Members
            vehicleID = id;
            manufacturer = manu;
            model = mod;
            year = yea;
// Increase for Vehicle Count
            totalVehicles++;
        }

// Set Function for Set Vehicle Details
        void setVehicle(int id, string manu, string mod, int yea)
        {
            vehicleID = id;
            manufacturer = manu;
            model = mod;
            year = yea;
        }
// Single Get Function to Display Vehicle Details
        void getVehicle()
        {
            cout << "The Vehicle ID is :- " << vehicleID;
            cout << "The Vehicle Manufacturer is :- " << manufacturer;
            cout << "The Vehicle Model is:- " << model;
            cout << "The Vehicle Year is :- " << year;
        }
// Function Check Vehicle ID for Searching
        bool checkVehicleID(int id)
        {
// Comparasion Given ID with Vehicle ID
            if(vehicleID == id)
            {
                return true;
            }
            return false;
        }

// Virtual Display Function for Runtime Polymorphism
        virtual void display()
        {
// Call for Get Function
            getVehicle();
        }
// Virtual Destructor
        virtual ~Vehicle()
        {
// Decrease Vehicle Count When Object is Destroyed
            totalVehicles--;
        }
};
// Initialize Static Member
int Vehicle::totalVehicles = 0;

// Single Inheritance :-
//----------------------
// Car Class Inherit to Vehicle Class
class Car : public Vehicle
{
// Private Data Member
    string fuelType;
    public:
// Default Constructor
        Car()
        {
            fuelType = "Not Available";
        }
// Set Function for Set Car Details
        void setCar(int id, string manu, string mod, int yea, string fuel)
        {
// Set Base Class Data Members
        setVehicle(id, manu, mod, yea);
// Set Car Data Member
            fuelType = fuel;
        }
// Get Function for Display Car Details
        void getCar()
        {
// Display Vehicle Details
            getVehicle();
// for Display Car Details
            cout << "The Fuel Type is :- " << fuelType;
        }
// Override Display Function for car object details
        void display()
        {
            getCar();
        }
};

// Multilevel Inheritance:-
//------------------------
// ElectricCar Class Inherit for Car Class
class ElectricCar : public Car
{
// Private Data Member
    float batteryCapacity;
    public:
// Default Constructor
        ElectricCar()
        {
            batteryCapacity = 0;
        }
// Set Function for Set Electric Car Details
        void setElectricCar(int id, string manu, string mod, int yea,
		string fuel, float battery)
        {
// Set Car Details
            setCar(id, manu, mod, yea, fuel);
// Set Battery Capacity
            batteryCapacity = battery;
        }
// Get Function for Display Electric Car Details
        void getElectricCar()
        {
// Display Car Details
            getCar();
// Display Battery Capacity
            cout << "The Battery Capacity is :- " << batteryCapacity << " kWh";
        }
// Override Display Function for Electric car object details
        void display()
        {
            getElectricCar();
        }
};

// Multilevel Inheritance :-
//-----------------------
// SportsCar Class Inherit for ElectricCar Class
class SportsCar : public ElectricCar
{
// Private Data Member
    int topSpeed;
    public:
// Default Constructor
        SportsCar()
        {
            topSpeed = 0;
        }
// Set Function to Set Sports Car Details
        void setSportsCar(int id, string manu, string mod, int yea,
                          string fuel, float battery, int speed)
        {
// Set Electric Car Details
            setElectricCar(id, manu, mod, yea, fuel, battery);
// Set Top Speed
            topSpeed = speed;
        }
// Get Function for Display Sports Car Details
        void getSportsCar()
        {
// Display Electric Car Details
            getElectricCar();
// Display Top Speed
            cout << "The Top Speed is :- " << topSpeed << " km/h";
        }
// Override Display Function for Sportcar Object details
        void display()
        {
            getSportsCar();
        }
};

// Hierarchical Inheritance :-
//--------------------------
// Sedan Class Inherit for Car Class
class Sedan : public Car
{
    public:
// Default Constructor
        Sedan()
        {
        }
// Set Function to Set Sedan Details
        void setSedan(int id, string manu, string mod, int yea, string fuel)
        {
// Set Car Details
            setCar(id, manu, mod, yea, fuel);
        }
// Get Function to Display Sedan Details
        void getSedan()
        {
// Display Car Details
            getCar();
        }
// Override Display Function for sedan object details
        void display()
        {
            getSedan();
        }
};

// Hierarchical Inheritance :-
//--------------------------
// SUV Class Inherit for Car Class
class SUV : public Car
{
    public:
// Default Constructor
        SUV()
        {
        }
// Set Function to Set SUV Details
        void setSUV(int id, string manu, string mod, int yea, string fuel)
        {
// Set Car Details
            setCar(id, manu, mod, yea, fuel);
        }
// Get Function to Display SUV Details
        void getSUV()
        {
// Display Car Details
            getCar();
        }

// Override Display Function for suv object details
        void display()
        {
            getSUV();
        }
};
// Base Class for Multiple Inheritance :-
//------------------------------------
class Aircraft
{
// Private Data Member
    float flightRange;
    public:
// Default Constructor
        Aircraft()
        {
            flightRange = 0;
        }
// Set Function to Set Aircraft Details
        void setAircraft(float range)
        {
            flightRange = range;
        }

// Get Function to Display Aircraft Details
        void getAircraft()
        {
            cout << "The Flight Range is :- " << flightRange << " kmp/h";
        }
};

// Multiple Inheritance:-
//----------------------
// FlyingCar Inherit for Car and Aircraft Classes
class FlyingCar : public Car, public Aircraft
{
    public:
    // Default Constructor
        FlyingCar()
        {
        }
// Set Function for Set Flying Car Details
        void setFlyingCar(int id, string manu, string mod, int yea,
                          string fuel, float range)
        {
// Set Car Details
            setCar(id, manu, mod, yea, fuel);

// Set Aircraft Details
            setAircraft(range);
        }
// Get Function for Display Flying Car Details
        void getFlyingCar()
        {
// Display Car Details
            getCar();
// Display Aircraft Details
            getAircraft();
        }
// Override Display Function for flying car object details
        void display()
        {
            getFlyingCar();
        }
};
// Vehicle Registry Class
class VehicleRegistry
{
// Array of Vehicle Pointers
    Vehicle *vehicles[100];

// Variable for Store Total Register Vehicles
    int total;

// Default Constructor
        VehicleRegistry()
        {
// Initially No Vehicle is Registered
            total = 0;
        }

// Function for Add Vehicle in Registry
        void addVehicle(Vehicle *v)
        {
// Check for Registry Capacity
            if(total < 100)
            {
// Store Vehicle Address in Pointer Array for vehical count
                vehicles[total] = v;
// Increase Registered Vehicle Count
                total++;
            }
            else
            {
// Display Message if Registry is Full
                cout << "The Registry is Full !";
            }
        }
// Function for Display All Register Vehicles
        void displayAllVehicles()
        {
// Check for Whether Registry is Empty
            if(total == 0)
            {
                cout << "The Vehicles is Found!";
            }
            else
            {
                cout << ":-----VEHICLE REGISTRY-----:";

// for Loop Through All Registered Vehicles
                for(int i = 0; i < total; i++)
                {
                    cout << "The Vehicle " << i + 1;

// Call Display Function for Using Base Class Pointer
// Virtual Function Calls the Derived Class Display Function
                    vehicles[i]->display();

                    cout << endl;
                }
            }
        }


