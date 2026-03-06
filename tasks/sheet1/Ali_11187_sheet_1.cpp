# include <iostream>
# include <cmath>
using namespace std;

// 6
void resist(){
    float r1, r2;
    cin >> r1;
    cin >> r2;
    cout << r1+r2 << endl;
    cout << (r1*r2)/(r1+r2) << endl;
}



// 7
void count(){
    float quarter, dim, nickl, cent, sum;
    cin >> quarter;
    cin >> dim;
    cin >> nickl;
    cin >> cent;
    sum = ((dim * 10) + (nickl * 5) + (quarter * 25) + cent)/100;
    cout << sum << endl;
}
// 8
void pythogreen(){
    float m, n, a, b, c;
    cin >> m;
    cin >> n;
    a = pow(m,2) - pow(n,2);
    b = 2*m*n;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << a<< b<< c << endl;
}





// 9
void apples(){
    int a, d;
    cin >> a;
    d = a / 12;
    a = a % 12;
    cout << d << " dozens and " << a << " apples" << endl;
}







