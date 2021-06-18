#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string maxBid, bidName;
    int bidValue, maxBidValue = 0, n;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> bidName;
        cin >> bidValue;

        if (bidValue > maxBidValue)
        {
            maxBidValue = bidValue;
            maxBid = bidName;
        }
    }

    cout << maxBid;

    return 0;
}