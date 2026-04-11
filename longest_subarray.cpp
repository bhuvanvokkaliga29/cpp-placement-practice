// This program finds the length of the longest subarray with given sum

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == target)
            {
                int len = j - i + 1;
                if (len > maxLen)
                {
                    maxLen = len;
                }
            }
        }
    }

    cout << "Longest subarray length: " << maxLen;

    return 0;
}