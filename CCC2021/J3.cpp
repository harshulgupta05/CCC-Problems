#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, direction1, direction2, distance, direction;
    int directionSum;

    while (input != "99999")
    {      
        cin >> input;

        if (input == "99999")
        {
            break;
        }

        direction1 = input.substr(0, 1);
        direction2 = input.substr(1, 1);
        distance = input.substr(2, 5);

        directionSum = stoi(direction1) + stoi(direction2);

        if (directionSum % 2 == 0 && directionSum != 0)
        {
            direction = "right";
        }
        else if (directionSum % 2 != 0)
        {
            direction = "left";
        }
        else if (directionSum == 0)
        {
            direction = direction;
        }

        cout << direction << " " << distance << endl;
    }

    return 0;
}