# include <iostream>
# include <cmath>
using namespace std;

int main(){
    float m, n, a, b, c;
    cout << "enter m value: " , cin >> m;
    cout << "enter n value: " , cin >> n;
    a = pow(m,2) - pow(n,2);
    b = 2*m*n;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << a<< endl << b << endl << c << endl;
    return 0;
}