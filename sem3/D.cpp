#include <iostream>

using namespace std;

int main() {
    int array[10000], n;
    cin >> n;
    int cnt = 0;
    cin >> array[0];
    for (int i = 1; i < n; ++i) {
        cin >> array[i];
        int prev = array[i - 1];
        if (array[i] > prev) {
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}


