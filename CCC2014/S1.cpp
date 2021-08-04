#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<bool> guests;
    int k, m;

    cin >> k;

    for (int i = 0; i < k; ++i) {
        guests.push_back(true);
    }

    cin >> m;

    for (int i = 0; i < m; ++i) {
        int n;
        cin >> n;
        
        // j + n not working
        for (int j = n; j < k; j + n) {
            guests[j-1] = false;
        }
    }

    for (int i = 0; i < k; ++i) {
        if (guests[i] == true) {
            cout << (i + 1);
        }
    }
}