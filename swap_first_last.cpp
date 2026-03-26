// This program swaps first and last elements of an array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Swap first and last
    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    cout << "Array after swap: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}