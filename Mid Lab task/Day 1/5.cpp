/*Write a function to calculate factorial of a given integer number if that number is a prime number. If it is not, it will give an error.

For example,
Scenario 1
Input: 5
Output: 120

Scenario 2
Input: 4
Output: Error! Not a prime number.
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        // fact *= i;
        fact = fact * i;
    }
    return fact;
}

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n))
    {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }
    else
    {
        cout << "Error! Not a prime number." << endl;
    }
    return 0;
}