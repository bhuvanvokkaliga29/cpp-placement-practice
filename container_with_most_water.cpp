// This program finds the maximum water that can be contained

#include <iostream>
using namespace std;

int main()
{

    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);

    int left = 0;
    int right = n - 1;

    int maxArea = 0;

    while (left < right)
    {

        int h = min(height[left], height[right]);
        int width = right - left;
        int area = h * width;

        if (area > maxArea)
        {
            maxArea = area;
        }

        // Move the smaller height pointer
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << "Maximum Water: " << maxArea;

    return 0;
}