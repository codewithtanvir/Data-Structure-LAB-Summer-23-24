#include <iostream>
using namespace std;

int main()
{

    int even = 0;
    int odd = 0;
    int arr[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

    cout << "Output of the array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << odd << " odd numbers" << endl;
    cout << even << " even numbers" << endl;

    return 0;
}