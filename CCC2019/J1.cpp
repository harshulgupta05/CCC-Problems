#include <iostream>

using namespace std;

int main() {
    int a3, a2, a1, b3, b2, b1, a_total, b_total;

    cin >> a3 >> a2 >> a1;
    cin >> b3 >> b2 >> b1;

    a_total = (a3 * 3) + (a2 * 2) + a1;
    b_total = (b3 * 3) + (b2 * 2) + b1;

    if (a_total > b_total) 
    {
        cout << "A";
    }
    else if (a_total < b_total) 
    {
        cout << "B";
    } 
    else
    {
        cout << "T";
    }

    return 1;
}