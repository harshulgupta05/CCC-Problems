#include <iostream>

using namespace std;

int main()
{
    int b, p;

    cin >> b;

    p = 5 * b - 400;

    if (p == 100)
    {
        cout << p << endl;
        cout << 0;
    }
    else if (p < 100)
    {
        cout << p << endl;
        cout << 1;
    }
    else if (p > 100)
    {
        cout << p << endl;
        cout << -1;
    }

    return 0;
}