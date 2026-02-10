#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    cout << "Pre-increment: " << ++x << endl;
    cout << "Post-increment: " << x++ << endl;
    cout << "After post-increment: " << x << endl;

    cout << "Pre-decrement: " << --x << endl;
    cout << "Post-decrement: " << x-- << endl;
    cout << "After post-decrement: " << x << endl;

    return 0;
}
