#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> scores;

    int n, k;

    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        int temp;

        cin >> temp;

        scores.push_back(temp);
    }

    sort(scores.begin(), scores.end());

    int maxattr = (n / k) + 1;

    reverse(scores.begin(), scores.end());

    int total = 0;

    for (int i = 0; i < maxattr; ++i) {
        total += scores[i];
    }

    cout << total;
}