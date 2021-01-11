#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, grid[100][100];

    cin >> n;
    
    for (int a = 0; a < n; ++a) {
		for (int b = 0; b < n; ++b) {
			cin >> grid[a][b];
		}
    }

    if (grid[0][0] < grid[0][1] && grid[0][0] < grid[1][0]) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (grid[0][0] < grid[0][1] && grid[0][0] > grid[1][0]) {
        for (int i = 0; i < n; ++i) {
            for (int j = n-1; j >= 0; --j) {
                cout << grid[j][i] << " ";
            }
            cout << endl;
        }
    }
    else if (grid[0][0] > grid[0][1] && grid[0][0] > grid[1][0]) {
        for (int i = n-1; i >= 0; --i) {
            for (int j = n-1; j >= 0; --j) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (grid[0][0] > grid[0][1] && grid[0][0] < grid[1][0]) {
        for (int i = n-1; i >= 0; --i) {
            for (int j = 0; j < n; ++j) {
                cout << grid[j][i] << " ";
            }
            cout << endl;
        }
    }
}
