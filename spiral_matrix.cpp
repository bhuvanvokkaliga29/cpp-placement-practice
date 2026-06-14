// This program prints a matrix in spiral order

#include <iostream>
using namespace std;

int main()
{

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int top = 0;
    int bottom = 2;
    int left = 0;
    int right = 3;

    cout << "Spiral Order: ";

    while (top <= bottom && left <= right)
    {

        // Top row
        for (int i = left; i <= right; i++)
        {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Right column
        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}