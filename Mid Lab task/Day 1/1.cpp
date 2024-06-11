#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

    cout << "Output of the array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Reversed of the array: ";
    for (int i = 10 - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}