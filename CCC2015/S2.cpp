// 4/15

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int j, a;
    vector<pair<char, bool>> jerseys;
    vector<char> athletes;
    vector<int> requests;

    cin >> j;
    cin >> a;

    for (int i = 0; i < j; ++i) {
        char temp;

        cin >> temp;

        jerseys.push_back({temp, false});
    }

    for (int i = 0; i < a; ++i) 
    {
        char temp;
        int req;

        cin >> temp >> req;

        athletes.push_back(temp);
        requests.push_back(req);
    }

    int filled = 0;

    for (int i = 0; i < a; i++)
    {
        if (jerseys[requests[i]].second == false) {
            if (athletes[i] == 'S') {
                jerseys[requests[i]].second = true;

                filled++;
            }

            if (athletes[i] == 'M')
            {
                if (jerseys[requests[i]].first == 'M' || jerseys[requests[i]].first == 'L') 
                {
                    jerseys[requests[i]].second = true;

                    filled++;
                }
            }

            if (athletes[i] == 'L')
            {
                if (jerseys[requests[i]].first == 'L')
                {
                    jerseys[requests[i]].second = true;

                    filled++;
                }
            }
        }
    }

    cout << filled;

    return 1;
}