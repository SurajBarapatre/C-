// print merge array of two array using for loop :-

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[5] = {60, 70, 80, 90, 100};
    int c[10];

    cout << "The First Array is :-\n";

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << "The Second Array is :-\n";

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    // For Merge both arrays
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        c[i + 5] = b[i];
    }

    cout << endl << "Merged Array is :-";

    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}

