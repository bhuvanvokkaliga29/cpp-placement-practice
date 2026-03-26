// This program counts positive and negative numbers in an array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {-2, 5, -1, 7, -3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] >= 0)
            pos++;
        else
            neg++;
    }

    cout << "Positive count: " << pos << endl;
    cout << "Negative count: " << neg << endl;

    return 0;
}