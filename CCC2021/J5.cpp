#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int m, n, k, num, counter = 0;

    cin >> m;
    cin >> n;

    string grid[m][n], pos;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            grid[i][j] = "B";
        }
    }

    cin >> k;

    for (int i = 0; i < k; ++i)
    {
        cin >> pos >> num;

        if (pos == "R")
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[num - 1][j] == "B")
                {
                    grid[num - 1][j] = "G";
                }
                else if (grid[num - 1][j] == "G")
                {
                    grid[num - 1][j] = "B";
                }
            }
        }
        else if (pos == "C")
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[j][num - 1] == "B")
                {
                    grid[j][num - 1] = "G";
                }
                else if (grid[j][num - 1] == "G")
                {
                    grid[j][num - 1] = "B";
                }
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (grid[i][j] == "G")
            {
                counter += 1;
            }
        }
    }

    cout << counter;
}