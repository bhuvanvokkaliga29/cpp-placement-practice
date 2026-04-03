// This program finds the maximum difference between two elements (arr[j] - arr[i]) where j > i

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal = arr[0];
    int maxDiff = arr[1] - arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] - minVal > maxDiff)
        {
            maxDiff = arr[i] - minVal;
        }

        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    cout << "Largest Difference: " << maxDiff;

    return 0;
}