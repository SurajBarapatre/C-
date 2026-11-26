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
    int year;
    string model;
    string manufacturer;

public:
// Static Member for Count Total Vehicles
    static int totalVehicles;

// Default Constructor
    Vehicle()
    {
// Assign Default Values
        this->vehicleID = 0;
        this->year = 0;
        this->model = "";
        this->manufacturer = "";
    }
	    
// Set Function for Set Vehicle Details
    void insertVehicle()
    {
		cout << endl;
// User Enter Vehicle Details
        cout << "Enter Your Vehicle ID :- ";
        cin >> this->vehicleID;

        cout << "Enter Your Vehicle Model :- ";
        cin >> this->model;

        cout << "Enter Your Vehicle Manufacturer :- ";
        cin >> this->manufacturer;

        cout << "Enter Your Vehicle Regitrated Year :- ";
        cin >> this->year;

// Increase Total Vehicle Count
        totalVehicles++;
    }

// Get Function to Display Vehicle Details
    void displayVehicle()
    { ":-------------------------------------------------------------------------:";
        cout << endl;
        cout << "The Vehicle ID is :- " << this->vehicleID << endl;
        cout << "The Vehicle Model is :- " << this->model << endl;
        cout << "The Vehicle Manufacturer is :- " << this->manufacturer << endl;
        cout << "The Vehicle Regitrated Year is :- " << this->year << endl;
      ":-------------------------------------------------------------------------:"; 
    }

// Get Function to Return Vehicle ID
    int getVehicleID()
    {
        return this->vehicleID;
    }
};

// Initialize Static Member
int Vehicle::totalVehicles = 0;

// Vehicle Registry Class
class VehicleRegistry
{
// Array of Vehicle Objects
    Vehicle v1[50];

// Variable for Store Current Index
    int currentIndex;

public:
// Default Constructor
    VehicleRegistry()
    {
        this->currentIndex = 0;
    }

    // Function to Add Vehicle in Registry
    void addVehicle()
    {
// Condition check Check Registry Capacity
        if (this->currentIndex == 50)
        {
            cout << "The Registry is Full!";
            return;
        }

// Insert Vehicle Details
        this->v1[this->currentIndex].insertVehicle();

// Increase Current Index
        this->currentIndex++;

        cout << endl;
        cout << "Vehicle Added Successfully!" << endl;
    }

// Function for Display All Registered Vehicles
    void displayAllVehicles()
    {
// condition Check Whether Registry is Empty
        if (this->currentIndex == 0)
        {
            cout << "No Vehicles Found!";
            return;
        }

        cout << endl;
        cout << ":-----VEHICLE REGISTRY SYSTEM-----:" << endl;

// For loop to Display All Vehicles
        for (int i = 0; i < this->currentIndex; i++)
        {
            cout << endl;
            cout << "Vehicle " << i + 1;

            this->v1[i].displayVehicle();
        }
    }

// Function for Search Vehicle Using ID
    void searchVehicle()
    {
        int id;
        int found = 0;

 // User Enter the Vehicle ID
 		cout << endl;
        cout << "Enter Your Vehicle ID :- ";
        cin >> id;

// for loop to Search Vehicle
        for (int i = 0; i < this->currentIndex; i++)
        {
            if (id == this->v1[i].getVehicleID())
            {
                cout << endl;
                cout << "The Vehicle is Found!";
                cout << endl;

                this->v1[i].displayVehicle();

                found = 1;
                break;
            }
        }

// condition Check Whether Vehicle is Not Found
        if (found == 0)
        {
            cout << "Vehicle Not Found!";
            cout << endl;
        }
    }
};

int main()
{
// Create Vehicle Registry Object
    VehicleRegistry v1;

    int choice;
    
    bool isOn = true;

    cout << "Welcome to Vehicle Registry System" << endl;

// Do-While Loop for Menu
    do
    {
        cout << endl;
        cout << "1. Add Your Vehicle" << endl;
        cout << "2. Display All Vehicles" << endl;
        cout << "3. Search Vehicle by ID" << endl;
        cout << "4. Exit" << endl;
        cout << endl;
        
// User Enter Choice
        cout << "Enter Your Choice :- ";
        cin >> choice;

// Switch Case for Menu
        switch (choice)
        {
            case 1:
                v1.addVehicle();
                break;

            case 2:
                v1.displayAllVehicles();
                break;

            case 3:
                v1.searchVehicle();
                break;

            case 4:
                isOn = false;
                cout << endl;
                cout << "The Program was Exited!" << endl;
                break;
                cout <<endl;

            default:
                cout << "Enter Valid Input!" << endl;
                cout << endl;
        }

    } while (isOn);

    return 0;
}

