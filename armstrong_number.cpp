#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int sum = 0;
    int digits = 0;

    // Count digits
    int temp = n;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate Armstrong sum
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
