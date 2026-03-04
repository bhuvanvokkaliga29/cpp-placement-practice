// This program finds the missing number from 1 to n in an array

#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    int totalSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        arraySum += arr[i];
    }

    return totalSum - arraySum; // Missing number
}

int main()
{
    int arr[] = {1, 2, 4, 5}; // 3 is missing
    int n = 5;

    cout << "Missing Number: " << findMissing(arr, n) << endl;

    return 0;
}