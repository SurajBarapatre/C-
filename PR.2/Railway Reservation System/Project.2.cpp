// Railway Reservation System :-

#include <iostream>
using namespace std;

// copytext Function for copy one character array into another
void copyText(char destination[], char source[])
{
    int i = 0;

    while (source[i] != '\0')      // while loop for copies text charecter by charcter until string at the end
    {
        destination[i] = source[i];
        i++;
    }

// For Adds null character at the end
    destination[i] = '\0';
}

// For Base class to store train details
class TrainDetails
{
    char trainName[100];
    char source[100];
    char destination[100];
    char trainTime[50];

public:
// For Default constructor
    TrainDetails()
    {
        trainName[0] = '\0';
        source[0] = '\0';
        destination[0] = '\0';
        trainTime[0] = '\0';
    }

// For Parameterized constructor
    TrainDetails(char trainName[], char source[],char destination[], char trainTime[])
    {
        copyText(this->trainName, trainName);
        copyText(this->source, source);
        copyText(this->destination, destination);
        copyText(this->trainTime, trainTime);
    }

// For Set value of train name
    void setTrainName(char trainName[])
    {
        copyText(this->trainName, trainName);
    }

// For Get value and display of train name
    char* getTrainName()
    {
        return trainName;
    }

// For Set value of source name
    void setSource(char source[])
    {
        copyText(this->source, source);
    }

// For Get value and display of source name
    char* getSource()
    {
        return source;
    }

// For Set value of destination name
    void setDestination(char destination[])
    {
        copyText(this->destination, destination);
    }

// For Get value and display of destination name
    char* getDestination()
    {
        return destination;
    }

// For Set value of train time
    void setTrainTime(char trainTime[])
    {
        copyText(this->trainTime, trainTime);
    }

// For Get value and display of train time
    char* getTrainTime()
    {
        return trainTime;
    }
};

// Derived class for Train inherits TrainDetails
class Train : public TrainDetails
{
    int trainNumber;

public:

// For Static data member
    static int trainCount;

// For Default constructor
    Train() : TrainDetails()
    {
        trainNumber = 0;
    }

// For Parameterized constructor
    Train(int trainNumber, char trainName[],char source[], char destination[],char trainTime[])  
		: TrainDetails(trainName, source, destination, trainTime)
    {
        this->trainNumber = trainNumber;

        if (trainNumber != 0)  // For avoid counting empty train objects in total train count
        {
            trainCount++;
        }
    }

// For Destructor
    ~Train()
    {
// For Decreases count for registered train objects
        if (trainNumber != 0)
        {
            trainCount--;
        }
    }

// For set Value of train number
    void setTrainNumber(int trainNumber)
    {
        this->trainNumber = trainNumber;
    }

// for get value and display of train number
    int getTrainNumber()
    {
        return trainNumber;
    }

// Method for accept train details
    void inputTrainDetails()
    {
        char name[50];
        char from[50];
        char to[50];
        char time[10];

        cout << "Enter Train Number :- ";
        cin >> trainNumber;

        cout << "Enter Train Name :- ";
        cin.width(50);                  // For set limit of character in array 
        cin >> name;

        cout << "Enter Source :- ";
        cin.width(50);                 // For set limit of character in array
        cin >> from;

        cout << "Enter Destination :- ";
        cin.width(50);                  // For set limit of character in array
        cin >> to;

        cout << "Enter Train Time :- ";
        cin.width(10);                  // For set limit of character in array
        cin >> time;

// For Calls set methods of base class
        setTrainName(name);
        setSource(from);
        setDestination(to);
        setTrainTime(time);

// For increases train count
        if (trainNumber != 0)
        {
            trainCount++;
        }
    }

// Method for display train details
    void displayTrainDetails()
    {
        cout << "\n:-----------------------------------:";
        cout << "\nTrain Number is :- " << getTrainNumber();
        cout << "\nTrain Name is   :- " << getTrainName();
        cout << "\nSource is :- " << getSource();
        cout << "\nDestination is :- " << getDestination();
        cout << "\nTrain Time is  :- " << getTrainTime();
        cout << "\n:-----------------------------------:";
    }

// Static method for return train count
    static int getTrainCount()
    {
        return trainCount;
    }
};

//For static data member
int Train::trainCount = 0;

// RailwaySystem class for manages train records
class RailwaySystem
{
// Array of 100 Train objects
    Train trains[100];

// For Stores total train records
    int totalTrains;

public:

// Default constructor
    RailwaySystem()
    {
        totalTrains = 0;
    }

// Method for add a new train
    void addTrain()
    {
        if (totalTrains >= 100)
        {
            cout << "* The Train records are Full! *";
            cout << endl;
            return;
        }

        cout << "\n:-------- Add New Train --------:";
        cout << endl;

// For Calls input method using array object
        trains[totalTrains].inputTrainDetails();

        totalTrains++;

        cout << "* Train Record Are Added Successfully! *";
        cout << endl;
    }

// Method to display all train records
    void displayAllTrains()
    {
        if (totalTrains == 0)
        {
            cout << "* There is No Train Records Available! *";
            cout << endl;
            return;
        }

        cout << "\n:-------- All Train Records --------:";

// Loop for display all train objects
        for (int i = 0; i < totalTrains; i++)
        {
            trains[i].displayTrainDetails();
        }
        cout << endl;

// Calls static method using scope resolution operator
        cout << "* Total Train Records * :- " << Train::getTrainCount();
        cout << endl;
    }

// Method for search train by number
    void searchTrainByNumber(int number)
    {
// Loop for search train records
        for (int i = 0; i < totalTrains; i++)
        {
            if (trains[i].getTrainNumber() == number)
            {
                cout << "* The Train Record is Found! *";

                trains[i].displayTrainDetails();

                return;
                
                cout << endl;
            }
        }

        cout << "* Train With Number *" << number << " * Not Found!* ";
        cout << endl;
    }

// Method for display menu
    void menu()
    {
        int choice;
        int number;

// do-while for repeats menu until user selects Exit
        do
        {
            cout << "\n:--------------------------------:";
            cout << "\n    RAILWAY RESERVATION SYSTEM    ";
            cout << "\n:--------------------------------:";
            cout << endl;

            cout << "\n1. :-- Add New Train Record --:";
            cout << "\n2. :-- Display All Train Records --:";
            cout << "\n3. :-- Search Train by Number --:";
            cout << "\n4. :-- Exit --:";
            cout << endl << endl;

            cout << "* Enter Your Choice * :- ";
            cin >> choice;
            cout << endl;

// switch case for performs operation according to choice
            switch (choice)
            {
                case 1:
                    addTrain();
                    break;

                case 2:
                    displayAllTrains();
                    break;

                case 3:
                    cout << "* Enter The Train Number to Search *:- ";
                    cin >> number;
                    cout << endl;

                    searchTrainByNumber(number);
                    break;

                case 4:
                    cout << "* Exiting The System. Goodbye! *";
                    break;
                    cout << endl;

                default:
                    cout << "* Invalid Choice! Please Try Again. *";
                    cout << endl;
            }

        } while (choice != 4);
    }
};

// Main function for execute of menu
int main()
{
    RailwaySystem r1;                  // for create object

    r1.menu();                         // for display menu

    return 0;
}


