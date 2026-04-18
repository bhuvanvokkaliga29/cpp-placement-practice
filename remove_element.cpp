// This program removes all occurrences of a given element from array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 2, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 2;

    int k = 0; // index for new array

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != val)
        {
            arr[k] = arr[i];
            k++;
        }
    }

    cout << "Array after removal: ";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}