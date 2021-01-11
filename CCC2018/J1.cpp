#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;

    if (num1 == 8 || num1 == 9)
    {
        if (num4 == 8 || num4 == 9)
        {
            if(num2 == num3)
            {
                cout << "ignore";
            }
        }
    }
    else 
    {
        cout << "answer";
    }
}