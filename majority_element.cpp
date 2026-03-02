// This program finds the majority element in an array
#include <iostream>
using namespace std;

int majorityElement(int arr[], int n)
{
    int candidate = arr[0];
    int count = 1;

    // Boyer-Moore Voting Algorithm
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    return candidate;
}

int main()
{
    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = majorityElement(arr, n);

    cout << "Majority Element: " << result;

    return 0;
}