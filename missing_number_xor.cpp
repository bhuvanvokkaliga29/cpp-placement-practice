// This program finds the missing number using XOR technique

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 4, 5}; // 3 is missing
    int n = 5;

    int xor1 = 0;
    int xor2 = 0;

    // XOR of all numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }

    // XOR of array elements
    for (int i = 0; i < n - 1; i++)
    {
        xor2 ^= arr[i];
    }

    int missing = xor1 ^ xor2;

    cout << "Missing Number: " << missing;

    return 0;
}