#include <iostream>
#include <cmath>    // for sqrt()
using namespace std;

int main() {
    float x;
    float sum = 0.0;
    float sumSq = 0.0;
    int n = 0;
    cout << "enter floating-point numbers:\n";
    while (cin >> x) {
        sum += x;
        sumSq += x * x;
        n++;
    }
    if (n > 1) {
        float mean = sum / n;
        float stddev = sqrt((sumSq - (sum * sum) / n) / (n - 1));

        cout << "\ncount: " << n << endl;
        cout << "average: " << mean << endl;
        cout << "standard deviation: " << stddev << endl;
    }
    return 0;
}
