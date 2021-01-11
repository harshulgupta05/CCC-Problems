#include <iostream>
#include <string>
// 1/15

using namespace std;

int main() {
    string input;
    int a = 0, b = 0;

    while (input != "7") {
        getline(cin, input);

        if (input.at(0) == *"1") {
            if (input.at(2) == *"A") {
                if (input.at(4) == *"-")
                {
                    a = input.at(5) - 48;
                    a = a - (a * 2);
                }
                else
                {
                    a = input.at(4) - 48;
                }
            }
            else if (input.at(2) == *"B") {
                if (input.at(4) == *"-")
                {
                    b = input.at(5) - 48;
                    b = b - (b * 2);
                }
                else
                {
                    b = input.at(4) - 48;
                }
            }
        }

        if (input.at(0) == *"2") {
            if (input.at(2) == *"A") {
                cout << a << endl;
            }
            else if (input.at(2) == *"B") {
                cout << b << endl;
            }
        }

        if (input.at(0) == *"3") {
            if (input.at(2) == *"A") {
                if (input.at(4) == *"A") {
                a = a + a;
                }
                else if (input.at(4) == *"B") {
                a = a + b;
                }
            }
            else if (input.at(2) == *"B") {
                if (input.at(4) == *"A") {
                b = b + a;
                }
                else if (input.at(4) == *"B") {
                b = b + b;
                }
            }
        }

        if (input.at(0) == *"4") {
            if (input.at(2) == *"A") {
                if (input.at(4) == *"A") {
                a = a * a;
                }
                else if (input.at(4) == *"B") {
                a = a * b;
                }
            }
            else if (input.at(2) == *"B") {
                if (input.at(4) == *"A") {
                b = b * a;
                }
                else if (input.at(4) == *"B") {
                b = b * b;
                }
            }
        }

        if (input.at(0) == *"5") {
            if (input.at(2) == *"A") {
                if (input.at(4) == *"A") {
                a = a - a;
                }
                else if (input.at(4) == *"B") {
                a = a - b;
                }
            }
            else if (input.at(2) == *"B") {
                if (input.at(4) == *"A") {
                b = b - a;
                }
                else if (input.at(4) == *"B") {
                b = b - b;
                }
            }
        }

        if (input.at(0) == *"6") {
            if (input.at(2) == *"A") {
                if (input.at(4) == *"A") {
                a = a / a;
                }
                else if (input.at(4) == *"B") {
                a = a / b;
                }
            }
            else if (input.at(2) == *"B") {
                if (input.at(4) == *"A") {
                b = b / a;
                }
                else if (input.at(4) == *"B") {
                b = b / b;
                }
            }
        }

        if (input.at(0) == *"7") {
            break;
        }
    }

    return 0;
}