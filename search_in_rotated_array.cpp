// This program searches an element in a rotated sorted array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    int left = 0;
    int right = n - 1;
    int index = -1;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            index = mid;
            break;
        }

        // Left half is sorted
        if (arr[left] <= arr[mid])
        {

            if (target >= arr[left] && target < arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        // Right half is sorted
        else
        {

            if (target > arr[mid] && target <= arr[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    cout << "Target found at index: " << index;

    return 0;
}