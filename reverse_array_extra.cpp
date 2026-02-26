// This program reverses an array using extra space (temporary array)

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int temp[n]; // extra space array

    // Copy elements in reverse order
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - 1 - i];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}