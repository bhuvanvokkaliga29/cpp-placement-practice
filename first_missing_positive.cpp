// This program finds the first missing positive integer in an unsorted array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Place each number in its correct position
    for (int i = 0; i < n; i++)
    {

        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
        }
    }

    // Find first missing positive
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "First Missing Positive: " << i + 1;
            return 0;
        }
    }

    cout << "First Missing Positive: " << n + 1;

    return 0;
}