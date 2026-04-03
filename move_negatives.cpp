// This program moves all negative numbers to the beginning of the array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, -2, 3, -4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = n - 1;

    while (left < right)
    {

        if (arr[left] < 0)
        {
            left++;
        }
        else if (arr[right] >= 0)
        {
            right--;
        }
        else
        {
            // swap
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }

    cout << "Array after moving negatives: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}