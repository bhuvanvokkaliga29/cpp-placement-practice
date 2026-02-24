// Program to find last occurrence of an element using Binary Search

#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            ans = mid;     // store answer
            low = mid + 1; // move right to find last occurrence
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

    int result = lastOccurrence(arr, n, target);

    if (result != -1)
        cout << "Last occurrence at index: " << result;
    else
        cout << "Element not found";

    return 0;
}