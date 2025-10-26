#include <iostream>
using namespace std;
int main() {
    int arr[100], n = 0, ch, pos, val, key;
    do {
        cout << "\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\nEnter choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
            break;
            case 2:
                for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            break;
            case 3:
                cout << "Enter position and value: ";
            cin >> pos >> val;
            for (int i = n; i >= pos; i--) arr[i] = arr[i - 1];
            arr[pos - 1] = val;
            n++;
            break;
            case 4:
                cout << "Enter position to delete: ";
            cin >> pos;
            for (int i = pos - 1; i < n - 1; i++) arr[i] = arr[i + 1];
            n--;
            break;
            case 5:
                cout << "Enter element to search: ";
            cin >> key;
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Found at position " << i + 1 << endl;
                    goto end;
                }
            }
            cout << "Not found" << endl;
            end:
            break;
        }
    } while (ch != 6);
    return 0;
}
