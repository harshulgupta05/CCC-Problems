#include <iostream>

using namespace std;

int main()
{
    double heights[10001], width[10000], n;
    double area, currentArea;

    cin >> n;

    for (int i = 0; i <= n; ++i)
    {
        cin >> heights[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> width[i];
    }

    for (int i = 0; i < n; ++i)
    {
        currentArea = width[i] * ((heights[i] + heights[i + 1]) / 2);

        area = area + currentArea;
    }

    cout << area;

    return 0;
}