// This program finds the square root of a number using binary search

#include <iostream>
using namespace std;

int main() {

    int num = 40;

    int left = 0;
    int right = num;
    int answer = 0;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(mid * mid == num) {
            answer = mid;
            break;
        }
        else if(mid * mid < num) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Square Root: " << answer;

    return 0;
}