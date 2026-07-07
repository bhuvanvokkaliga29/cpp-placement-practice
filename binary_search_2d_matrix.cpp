// This program searches a target element in a sorted 2D matrix

#include <iostream>
using namespace std;

int main() {

    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int rows = 3;
    int cols = 4;
    int target = 16;

    int low = 0;
    int high = rows * cols - 1;
    int found = -1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        int row = mid / cols;
        int col = mid % cols;

        if(matrix[row][col] == target) {
            found = mid;
            break;
        }
        else if(matrix[row][col] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found != -1) {
        cout << "Element Found";
    }
    else {
        cout << "Element Not Found";
    }

    return 0;
}