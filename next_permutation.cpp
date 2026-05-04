// This program finds the next lexicographical permutation of the array

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = n - 2;

    // Step 1: Find first decreasing element
    while (i >= 0 && arr[i] >= arr[i + 1])
    {
        i--;
    }

    if (i >= 0)
    {
        int j = n - 1;

        // Step 2: Find just greater element
        while (arr[j] <= arr[i])
        {
            j--;
        }

        // Swap
        swap(arr[i], arr[j]);
    }

    // Step 3: Reverse remaining
    reverse(arr + i + 1, arr + n);

    cout << "Next Permutation: ";
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}