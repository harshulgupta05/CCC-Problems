#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int t;
    vector<int> numbers;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int temp;

        cin >> temp;

        numbers.push_back(temp);
    }

    for (int i = 0; i < t; i++) {
        int current = numbers[i];

        for (int j = 2; j <= current; j++) {
            if (isPrime(j)) {
                int diff = current - j;

                if (isPrime(current + diff)) {
                    int num2 = current + diff;

                    cout << j << " " << num2 << endl;

                    break;
                }
            }
        }
    }

    return 1;
}