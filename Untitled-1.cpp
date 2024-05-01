#include <iostream>

using namespace std;

int main() {
    int height;
    cin >> height;
        for (int i = 1; i <= height; ++i) {
        cout << string(height - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    return 0;
}
