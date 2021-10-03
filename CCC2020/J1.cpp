#include <iostream>

using namespace std;

int main()
{
    int s, m, l;

    cin >> s >> m >> l;

    int total = s + (2 * m) + (3 * l);

    if (total >= 10)
        cout << "happy";
    else
        cout << "sad";

    return 1;
}
