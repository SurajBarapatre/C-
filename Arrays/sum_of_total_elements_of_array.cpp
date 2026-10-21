// find sum of total elements of array using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Total Sum Elements of Array is :-" <<sum<< "\n";

    return 0;
}

