# include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    switch (input) {
    case 1:case 3:case 5:case 7:
    case 8:case 10:case 12:cout << "31 days.";break;
    case 4:case 6:case 11:cout << "30 days.";break;
    case 2:cout << "28 or 29 days.";break;
    }
    return 0;
}