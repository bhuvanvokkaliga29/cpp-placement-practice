// This program finds the length of the longest consecutive sequence

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> s;

    // Insert all elements into set
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    int longest = 0;

    for (int i = 0; i < n; i++)
    {

        // Check if it's the start of a sequence
        if (s.find(arr[i] - 1) == s.end())
        {

            int current = arr[i];
            int count = 1;

            // Count consecutive numbers
            while (s.find(current + 1) != s.end())
            {
                current++;
                count++;
            }

            if (count > longest)
            {
                longest = count;
            }
        }
    }

    cout << "Longest Consecutive Length: " << longest;

    return 0;
}