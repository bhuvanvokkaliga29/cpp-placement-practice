// This program finds the largest minimum distance between cows

#include <iostream>
#include <algorithm>
using namespace std;

bool canPlaceCows(int stalls[], int n, int cows, int distance) {

    int count = 1;
    int lastPosition = stalls[0];

    for(int i = 1; i < n; i++) {

        if(stalls[i] - lastPosition >= distance) {
            count++;
            lastPosition = stalls[i];
        }

        if(count >= cows) {
            return true;
        }
    }

    return false;
}

int main() {

    int stalls[] = {1, 2, 4, 8, 9};
    int n = sizeof(stalls) / sizeof(stalls[0]);
    int cows = 3;

    sort(stalls, stalls + n);

    int left = 1;
    int right = stalls[n - 1] - stalls[0];
    int answer = 0;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(canPlaceCows(stalls, n, cows, mid)) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Largest Minimum Distance: " << answer;

    return 0;
}