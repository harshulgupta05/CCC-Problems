// 9/15

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> measurements;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;

        cin >> temp;

        measurements.push_back(temp);
    }

    sort(measurements.begin(), measurements.end());

    for (int i = 0; i < n / 2; i++)
    {
        cout << measurements[n / 2 - 1 - i];
        cout << " ";
        cout << measurements[n / 2 + i];
        cout << " ";
    }
}