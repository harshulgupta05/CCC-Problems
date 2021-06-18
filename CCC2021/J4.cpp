#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    bool sorted;
    int counter = 0, lastL = 0, firstS = 0;

    cin >> input;

    while (sorted == false)
    {
        lastL = int(input.find_last_of("L"));

        firstS = int(input.find_first_of("S"));

        if (lastL < firstS)
        {
            sorted = true;

            break;
        }

        input.erase(firstS, 1);

        input.insert((lastL + 1), "S");

        counter += 1;
    }

    if (counter == 0)
    {
        cout << 0;
    }
    else
    {
        cout << (counter);
    }

    return 0;
}