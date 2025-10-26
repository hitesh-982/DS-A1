#include <iostream>
using namespace std;
int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSum, colSum;
    for (int i = 0; i < 3; i++) {
        rowSum = 0;
        for (int j = 0; j < 3; j++)
            rowSum += a[i][j];
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }
    for (int i = 0; i < 3; i++) {
        colSum = 0;
        for (int j = 0; j < 3; j++)
            colSum += a[j][i];
        cout << "Column " << i + 1 << " sum = " << colSum << endl;
    }
    return 0;
}
