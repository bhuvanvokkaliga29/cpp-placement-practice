// This program finds all leader elements in an array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxRight = arr[n - 1];

    cout << "Leaders: " << maxRight << " ";

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--)
    {

        if (arr[i] > maxRight)
        {
            maxRight = arr[i];
            cout << maxRight << " ";
        }
    }

    return 0;
}