#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0)
        return 0;

    int i = 0; // pointer for unique elements

    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1; // new size of array
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}