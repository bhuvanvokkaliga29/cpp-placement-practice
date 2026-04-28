// This program finds the majority element using Moore's Voting Algorithm
// Majority element = appears more than n/2 times

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int candidate = 0;
    int count = 0;

    // Step 1: Find candidate
    for (int i = 0; i < n; i++)
    {

        if (count == 0)
        {
            candidate = arr[i];
        }

        if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        cout << "Majority Element: " << candidate;
    }
    else
    {
        cout << "No Majority Element";
    }

    return 0;
}