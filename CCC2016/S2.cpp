#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    if (n == 1) {
        vector<int> dmoj; vector<int> peg;

        for (int i = 0; i < k; ++i) {
            int temp;
            cin >> temp;
            dmoj.push_back(temp);
        }

        for (int i = 0; i < k; ++i) {
            int temp;
            cin >> temp;
            peg.push_back(temp);
        }

        sort(dmoj.begin(), dmoj.end());
        reverse(dmoj.begin(), dmoj.end());

        sort(peg.begin(),peg.end());
        reverse(peg.begin(),peg.end());

        int totalSpeed = 0;

        for (int i = 0; i < k; i++ ) {
            totalSpeed += max(dmoj[i], peg[i]);
        }

        cout << totalSpeed;
    }
    else if (n == 2) {
        vector<int> dmoj; vector<int> peg;

        for (int i = 0; i < k; ++i) {
            int temp;
            cin >> temp;
            dmoj.push_back(temp);
        }        

        for (int i = 0; i < k; ++i) {
            int temp;
            cin >> temp;
            peg.push_back(temp);
        }        

        sort(dmoj.begin(), dmoj.end());
        reverse(dmoj.begin(), dmoj.end());

        sort(peg.begin(),peg.end());

        int totalSpeed = 0;

        for (int i = 0; i < k; ++i) {
            totalSpeed += max(dmoj[i], peg[i]);
        }

        cout << totalSpeed;
    }
}