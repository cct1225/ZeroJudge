#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n;
    cin >> n;
    pair<int, int> arr[1005];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n);//t compares them based on the first element of each pair, and if the first elements are equal, it compares the second elements.

    for (int i = 0; i < n; i++) { // Fix the loop start and condition
        cout << arr[i].first << " " << arr[i].second << '\n';
    }

    return 0; // Add return statement to indicate successful execution
}
