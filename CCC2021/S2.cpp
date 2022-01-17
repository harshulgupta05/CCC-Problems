#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, r;

    cin >> n >> m >> r;

    vector<vector<char>> canvas;

    for (int i = 0; i < n; i++) {
        vector<char> temp;

        for (int j = 0; j < m; j++) {
            temp.push_back('B');
        }

        canvas.push_back(temp);
    }

    for (int i = 0; i < r; i++)
    {
        char a;
        int b;

        cin >> a >> b;

        switch (a)
        {
            case 'R':
                for (int x = 0; x < m; x++) {
                    if (canvas[b-1][x] == 'B') {                    
                        canvas[b - 1][x] = 'G';
                    }
                    else {
                        canvas[b-1][x] = 'B';
                    }
                }

                break;
            case 'C':
                for (int x = 0; x < n; x++) {
                    if (canvas[x][b-1] == 'B') {                    
                        canvas[x][b-1] = 'G';
                    }
                    else {
                        canvas[x][b-1] = 'B';
                    }
                }

                break;
        }
    }

    int gold = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (canvas[i][j] == 'G') gold++;
        }
    }    

    cout << gold;
}