// This program calculates the average of elements in an array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double average = (double)sum / n;

    cout << "Average of elements: " << average << endl;

    return 0;
}