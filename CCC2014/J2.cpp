#include <iostream>
#include <string>

using namespace std;

int main() {
    int numofvotes, votesA = 0, votesB = 0;
    string votes;


    cin >> numofvotes;
    cin >> votes;

    for (int i = 0; i < numofvotes; i++) {
        if (votes.at(i) == 'A') {
            votesA += 1;
        }
        else if (votes.at(i) == 'B') {
            votesB += 1;
        }
    }

    if (votesA == votesB) {
        cout << "Tie";
    }
    else if (votesB > votesA) {
        cout << "B";
    }
    else {
        cout << "A";
    }
}