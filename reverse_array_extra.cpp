#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int* temp = new int[n];

    for(int i = 0; i < n; i++) {
        temp[i] = arr[n - 1 - i];
    }

    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    delete[] temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}