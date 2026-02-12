#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "(a < b && a > 0): " << (a < b && a > 0) << endl;
    cout << "(a > b || a > 0): " << (a > b || a > 0) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    return 0;
}
