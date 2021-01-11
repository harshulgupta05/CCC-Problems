#include <iostream>
#include <string>

using namespace std;

int main() {
    int parkingspaces, occupied;
    string day1, day2;

    cin >> parkingspaces;
    cin >> day1;
    cin >> day2;
    occupied = 0;

    for (int i = 0; i < parkingspaces; i++) {
        if (day1.at(i) == 'C' && day1.at(i) == day2.at(i)) {
            occupied = occupied + 1;
        }
    }

    cout << occupied;
    return 0;
}