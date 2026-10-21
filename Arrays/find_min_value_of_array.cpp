// find min value of array using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 50, 30, 40, 20};
    
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "The Minimum Number of Array is  = " << min << "\n";

    return 0;
}

