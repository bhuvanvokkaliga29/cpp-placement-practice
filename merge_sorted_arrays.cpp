// This program merges two sorted arrays into one sorted array

#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n1 + n2];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    // Remaining elements
    while (i < n1)
    {
        merged[k++] = arr1[i++];
    }

    while (j < n2)
    {
        merged[k++] = arr2[j++];
    }

    cout << "Merged array: ";
    for (int x = 0; x < n1 + n2; x++)
    {
        cout << merged[x] << " ";
    }

    return 0;
}