#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int s = 1; s <= n - i; s++) {
            cout << "-";
        }

        // print stars
        for (int st = 1; st <= 2 * i - 1; st++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}