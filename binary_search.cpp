#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int left = 0;
    int right = n - 1;
    int foundIndex = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            foundIndex = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (foundIndex != -1)
        cout << "Element found at index: " << foundIndex;
    else
        cout << "Element not found";

    return 0;
}
