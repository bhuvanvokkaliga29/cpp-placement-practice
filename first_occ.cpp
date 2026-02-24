// Program to find first occurrence of an element using Binary Search

#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            ans = mid;      // store answer
            high = mid - 1; // move left to find first occurrence
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int result = firstOccurrence(arr, n, target);

    if (result != -1)
        cout << "First occurrence at index: " << result;
    else
        cout << "Element not found";

    return 0;
}