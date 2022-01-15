#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<string> lines;

    cin >> n;

    for (int i = 0; i <= n; i++) {
        string temp;

        getline(cin, temp);

        lines.push_back(temp);
    }

    int s = 0, t = 0;

    for (string line : lines) {
        for (char c : line) {
            if (c == 's' || c == 'S') {
                s++;
            }

            if (c == 't' || c == 'T') {
                t++;
            }
        }
    }

    if (t > s) {
        cout << "English";
    }
    else {
        cout << "French";
    }

    return 1;
}