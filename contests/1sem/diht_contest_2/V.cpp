#include <iostream>

using namespace std;

int main() {
    int size1;
    cin >> size1;
    ++size1;
    int *seq1 = new int[size1];
    seq1[0] = 0;
    for (int i = 1; i < size1; ++i) {
        cin >> seq1[i];
    }
    int size2;
    cin >> size2;
    ++size2;
    int *seq2 = new int[size2];
    seq2[0] = 0;
    for (int i = 1; i < size2; ++i) {
        cin >> seq2[i];
    }
    int **cls = new int *[size1];
    for (int i = 0; i < size1; ++i) {
        cls[i] = new int[size2]();
    }
    for (int i = 1; i < size1; ++i) {
        for (int j = 1; j < size2; ++j) {
            if (seq1[i] == seq2[j]) {
                cls[i][j] = cls[i - 1][j - 1] + 1;
            } else {
                cls[i][j] = max(cls[i - 1][j], cls[i][j - 1]);
            }
        }
    }
    int i = size1 - 1, j = size2 - 1;
    int size = cls[i][j];
    int cnt = 0;
    int *seq = new int[size];
    while (i != 0 && j != 0) {
        if (seq1[i] == seq2[j] && cls[i][j] == cls[i - 1][j - 1] + 1) {
            seq[cnt++] = seq1[i];
            --i;
            --j;
        } else if (cls[i][j - 1] == max(cls[i][j - 1], cls[i - 1][j])) {
            --j;
        } else {
            --i;
        }
    }
    for (int k = size - 1; k >= 0; --k) {
        cout << seq[k] << ' ';
    }
    delete[] seq;
    for (int l = 0; l < size1; ++l) {
        delete[] cls[l];
    }
    delete[] cls;
    delete[] seq1;
    delete[] seq2;
    return 0;
}