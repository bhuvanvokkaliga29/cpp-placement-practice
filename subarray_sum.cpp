// This program finds if there exists a subarray with given sum

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 33;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == target)
            {
                cout << "Subarray found from index " << i << " to " << j;
                return 0;
            }
        }
    }

    cout << "No subarray found";

    return 0;
}