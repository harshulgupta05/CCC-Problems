#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> swifts;
    vector<int> semaphores;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int score;

        cin >> score;

        swifts.push_back(score);
    }

    for (int i = 0; i < n; i++)
    {
        int score;

        cin >> score;

        semaphores.push_back(score);
    }

    int sameTotal = 0;
    int swiftTotal = 0, semaTotal = 0;

    for (int i = 0; i < n; i++)
    {
        swiftTotal += swifts[i];
        semaTotal += semaphores[i];

        if (swiftTotal == semaTotal)
        {
            if ((i + 1) > sameTotal)
            {
                sameTotal = i + 1;
            }
        }
    }

    cout << sameTotal;
}