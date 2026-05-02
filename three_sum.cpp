// This program finds all triplets whose sum is equal to 0

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Sort the array
    sort(arr, arr + n);

    cout << "Triplets:\n";

    for (int i = 0; i < n - 2; i++)
    {

        // Skip duplicates
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {

            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0)
            {
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;

                // Skip duplicates
                while (left < right && arr[left] == arr[left + 1])
                    left++;
                while (left < right && arr[right] == arr[right - 1])
                    right--;

                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return 0;
}