#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n / 2; i++) {
        int t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{2, 0}, {1, 2}};
    int C[2][2];
    cout << "\nMatrix Multiplication:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++)
                C[i][j] += A[i][k] * B[k][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of A:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << A[j][i] << " ";
        cout << endl;
    }
    return 0;
}
