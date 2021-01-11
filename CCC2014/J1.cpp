#include <iostream>

using namespace std;

int main() {
    int side1, side2, side3;

    cin >> side1;
    cin >> side2;
    cin >> side3;

    if ((side1 + side2 + side3) != 180) {
        cout << "Error";
    }
    else if (side1 == 60 && side2 == 60 && side3 == 60) {
        cout << "Equilateral";
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "Isosceles";
    }
    else {
        cout << "Scalene";
    }
}