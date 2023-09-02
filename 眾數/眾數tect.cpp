#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int values[10001] = {0};
    int modes[10001] = {0}; // 存储众数
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        values[number] += 1;
        if (values[number] > maxCount) {
            maxCount = values[number];
        }
    }

    int modeCount = 0;
    for (int i = 0; i <= 10000; i++) {
        if (values[i] == maxCount) {
            modes[modeCount] = i;
            modeCount++;
        }
    }

    cout << "Modes: ";
    for (int i = 0; i < modeCount; i++) {
        cout << modes[i] << " ";
        cout << "(Occurred " << maxCount << " times)" << endl;
    }
    
    return 0;
}
