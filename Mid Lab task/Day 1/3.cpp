#include <iostream>
using namespace std;

void oddnumber(int a, int b)
{
    for (int i = a; i <= b; i++)
        if (i % 2 == 1)
            cout << i << " ";
}

int main()
{
    int a;
    cout << "Starting value: ";
    cin >> a;
    cout << "Ending value: ";
    int b;
    cin >> b;
    cout << "Starting value: " << a << endl;
    cout << "Ending value: " << b << endl;
    oddnumber(a, b);
    return 0;
}