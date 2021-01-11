#include <iostream>
// WIP

using namespace std;

int main() {
    int numsteps, byron_forward, byron_backward, nikky_forward, nikky_backward, nikky_pos, byron_pos, currentsteps_nikky, currentsteps_byron;

    cin >> nikky_forward;
    cin >> nikky_backward;
    cin >> byron_forward;
    cin >> byron_backward;
    cin >> numsteps;

    while (currentsteps_nikky <= numsteps)
    {
        for (int a = 0; a <= nikky_forward; ++a)
        {
            nikky_pos = nikky_pos + 1;
            currentsteps_nikky = currentsteps_nikky + 1;
        }
        for (int b = 0; b <= nikky_backward; ++b)
        {
            nikky_pos = nikky_pos - 1;
            currentsteps_nikky = currentsteps_byron + 1;
        }
    }

    while (currentsteps_byron <= numsteps)
    {
        for (int i = 0; i <= byron_forward; ++i)
        {
            byron_pos = byron_pos + 1;
            currentsteps_byron = currentsteps_byron + 1;
        }
        for (int j = 0; j <= byron_backward; ++j)
        {
            byron_pos = byron_pos - 1;
            currentsteps_byron = currentsteps_byron + 1;
        }
    }

    if (nikky_pos > byron_pos)
    {
        cout << "Nikky";
    }
    else if (byron_pos > nikky_pos)
    {
        cout << "Byron";
    }
    else
    {
        cout << "Tied";
    }
}