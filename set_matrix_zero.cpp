// This program sets entire row and column to 0 if an element is 0

#include <iostream>
using namespace std;

int main()
{

    int matrix[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    bool rows[3] = {false};
    bool cols[3] = {false};

    // Mark rows and columns
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    // Set rows to zero
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (rows[i] || cols[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    cout << "Updated Matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}