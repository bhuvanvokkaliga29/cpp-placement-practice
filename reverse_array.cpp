#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
