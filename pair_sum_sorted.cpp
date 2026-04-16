// This program finds a pair with given sum in a sorted array using two pointers

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int left = 0;
    int right = n - 1;

    while (left < right)
    {

        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            cout << "Pair found: " << arr[left] << " " << arr[right];
            return 0;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << "No pair found";

    return 0;
}