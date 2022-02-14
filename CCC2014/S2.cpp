#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<string> line1; vector<string> line2;

    for (int i = 0; i < n; ++i) {
        string temp;

        cin >> temp;

        line1.push_back(temp);
    }

    for (int i = 0; i < n; ++i) {
        string temp;

        cin >> temp;

        line2.push_back(temp);
    }

    
}