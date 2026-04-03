// This program checks if the array contains duplicate elements

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (found)
        cout << "Duplicate elements found";
    else
        cout << "No duplicates";

    return 0;
}