// This program finds the maximum number of consecutive 1s in a binary array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 1)
        {
            count++;
            if (count > maxCount)
            {
                maxCount = count;
            }
        }
        else
        {
            count = 0;
        }
    }

    cout << "Maximum consecutive 1s: " << maxCount;

    return 0;
}