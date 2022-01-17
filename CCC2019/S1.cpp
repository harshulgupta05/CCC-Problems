#include <iostream>
#include <string>

using namespace std;

int main() {
    int grid[2][2];

    string flips;

    cin >> flips;

    grid[0][0] = 1;
    grid[0][1] = 2;
    grid[1][0] = 3;
    grid[1][1] = 4;

    for (char c : flips) {
        if (c == 'H') {
            int temp00, temp01;

            temp00 = grid[0][0];
            temp01 = grid[0][1];

            grid[0][0] = grid[1][0];
            grid[0][1] = grid[1][1];
            grid[1][0] = temp00;
            grid[1][1] = temp01;                                                
        }

        if (c == 'V') {
            int temp00, temp10;

            temp00 = grid[0][0];
            temp10 = grid[1][0];

            grid[0][0] = grid[0][1];
            grid[0][1] = temp00;
            grid[1][0] = grid[1][1];
            grid[1][1] = temp10;
        }
    }

    cout << grid[0][0] << " " << grid[0][1] << endl;
    cout << grid[1][0] << " " << grid[1][1];
}