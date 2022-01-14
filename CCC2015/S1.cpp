#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> list) {
    int sum = 0;

    if (list.empty()) {
        return 0;
    }

    for (int n : list) {
        sum += n;
    }

    return sum;
}

int main() {
    int k;
    vector<int> numbers;

    cin >> k;

    for (int i = 0; i < k; i++) {
        int temp;

        cin >> temp;

        if (temp == 0) {
            numbers.pop_back();
        }
        else {
            numbers.push_back(temp);
        }
    }    

    int sum_numbers = sum(numbers);

    cout << sum_numbers;

    return 1;
}