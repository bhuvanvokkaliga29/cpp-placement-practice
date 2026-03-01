// This program checks whether the given array is sorted in ascending order

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false; // If any element is greater than next, not sorted
        }
    }

    return true; // If loop completes, array is sorted
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}