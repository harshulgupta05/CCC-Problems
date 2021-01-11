#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    int n;
    double villagesize[100], smallestvillage, villages[100];

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> villages[i];
    }

    sort(villages, villages + (n));

    for (int a = 1; a < (n - 1); ++a)
    {
        villagesize[a] = ((villages[a] - villages[a-1]) / 2) + ((villages[a + 1] - villages[a]) / 2);
    }

    sort(villagesize, villagesize + (n - 1));

    smallestvillage = villagesize[1];

    cout <<  fixed << setprecision(1) << villagesize[1];
}