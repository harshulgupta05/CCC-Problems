#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<char> answers;
    vector<char> keys;

    for (int i = 0; i < n; i++) {
        char temp;

        cin >> temp;

        answers.push_back(temp);    
    }

    for (int i = 0; i < n; i++) {
        char temp;

        cin >> temp;

        keys.push_back(temp);
    }

    int correct = 0;

    for (int i = 0; i < n; i++) {
        if (answers[i] == keys[i]) {
            correct++;
        }
    }

    cout << correct;

    return 1;
}