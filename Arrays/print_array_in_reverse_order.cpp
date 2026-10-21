//print array in reverse order using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array in reverse order is :- " << endl;

    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

