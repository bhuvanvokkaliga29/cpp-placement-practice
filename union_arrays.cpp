// This program finds the union of two arrays (unique elements)

#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int temp[n1 + n2];
    int k = 0;

    // Add all elements of arr1
    for (int i = 0; i < n1; i++)
    {
        temp[k++] = arr1[i];
    }

    // Add elements of arr2 if not already present
    for (int i = 0; i < n2; i++)
    {

        bool found = false;

        for (int j = 0; j < k; j++)
        {
            if (arr2[i] == temp[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            temp[k++] = arr2[i];
        }
    }

    cout << "Union: ";
    for (int i = 0; i < k; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}