// This program finds the Next Greater Element for each array element

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 5, 2, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Next Greater Elements:\n";

    for (int i = 0; i < n; i++)
    {

        int next = -1; // Default if no greater element

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        cout << arr[i] << " -> " << next << endl;
    }

    return 0;
}