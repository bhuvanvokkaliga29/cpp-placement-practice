// This program checks if any two numbers in array give target sum

#include <iostream>
using namespace std;

bool pairSum(int arr[], int n, int target) {

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " " << arr[j] << endl;
                return true;
            }
        }
    }

    return false;
}

int main() {

    int arr[] = {2, 4, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    if(!pairSum(arr, n, target)) {
        cout << "No pair found";
    }

    return 0;
}