// This program counts even and odd numbers in an array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
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

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}