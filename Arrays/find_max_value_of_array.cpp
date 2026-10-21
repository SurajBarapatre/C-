// find max value of array using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 50, 30, 80, 20};
    
    int max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The Maximum Number of Array is = " << max << "\n";

    return 0;
}

