#include <iostream>

using namespace std;

int main() {
    int city1pos, city2pos, city3pos, city4pos;

    cin >> city1pos >> city2pos >> city3pos >> city4pos;

    cout << 0 << " " << (city1pos) << " " << (city1pos + city2pos) << " " << (city1pos + city2pos + city3pos) << " " << (city1pos + city2pos + city3pos + city4pos) << endl;
    cout << city1pos << " " << 0 << " " << (city2pos) << " " << (city2pos + city3pos) << " " << (city2pos + city3pos + city4pos) << endl;
    cout << (city1pos + city2pos) << " " << (city2pos) << " " << 0 << " " << (city3pos) << " " << (city3pos + city4pos) << endl;
    cout << (city1pos + city2pos + city3pos) << " " << (city2pos + city3pos) << " " << (city3pos) << " " << 0 << " " << (city4pos) << endl;
    cout << (city1pos + city2pos + city3pos+ city4pos) << " " << (city2pos + city3pos + city4pos) << " " << (city3pos + city4pos) << " " << (city4pos) << " " << 0;
}