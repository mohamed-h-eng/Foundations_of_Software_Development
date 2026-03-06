# include <iostream>
using namespace std;

int main(){
    float R1, R2;
    cout << "enter R1 value: ", cin >> R1;
    cout << "enter R2 value: ", cin >> R2;
    cout << "equivalent resistance when connection is: " << endl;
    cout << "in series:   " << R1+R2 << endl;
    cout << "in parallel: " << (R1*R2)/(R1+R2);
    return 0;
}