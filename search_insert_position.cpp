// This program finds the position of a target element or its insert position

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 2;

    int left = 0;
    int right = n - 1;
    int answer = n;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        if (arr[mid] >= target)
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << "Insert Position: " << answer;

    return 0;
}