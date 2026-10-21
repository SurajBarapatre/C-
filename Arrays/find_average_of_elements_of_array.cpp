// find average of elements of array using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    int sum = 0;
    
    float avg;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    avg = (float)sum / 5;

    cout << "The Total Sum of array is = " << sum << "\n";
    
    cout << "The Average of Elements of array is = " << avg << "\n";

    return 0;
}


