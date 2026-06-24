// This program merges two sorted arrays without using extra space

#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int left = n - 1;
    int right = 0;

    while (left >= 0 && right < m)
    {

        if (arr1[left] > arr2[right])
        {

            int temp = arr1[left];
            arr1[left] = arr2[right];
            arr2[right] = temp;

            left--;
            right++;
        }
        else
        {
            break;
        }
    }

    // Sort both arrays
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] > arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (arr2[i] > arr2[j])
            {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    cout << "First Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;

    cout << "Second Array: ";
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}