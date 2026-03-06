# include <iostream>
# include <cmath>
using namespace std;

// question 6- The equivalent resistance of resistors connected in series is
// calculated by adding the resistances of individual resistors. Req
// = R1 + R2
void calc_resistance(){
    float R1, R2;
    cout << "6-Program to calculate equivalent resistance" << endl;
    cout << "\tenter R1 value: ", cin >> R1;
    cout << "\tenter R2 value: ", cin >> R2;
    cout << "\tequivalent resistance when connection is: " << endl;
    cout << "\t\tin series:   " << R1+R2 << endl;
    cout << "\t\tin parallel: " << (R1*R2)/(R1+R2) << endl << endl;
}

// 7- Write a C++ program Count Change to count change. Given
// ,the number of quarter, dimes
void count_change(){
    float quarter, dime, nickel, cent, total;
    cout << "7-program Count Change" << endl;
    cout << "\tenter quarters: " ,cin >> quarter;
    cout << "\tenter dime: " ,cin >> dime;
    cout << "\tenter nickel: " ,cin >> nickel;
    cout << "\tenter cent: " ,cin >> cent;
    total = ((dime * 10) + (nickel * 5) + (quarter * 25) + cent)/100;
    cout << "\ttotal in dollars and cents: " << total << endl << endl;
}

// 8 -The Pythagorean Theorem states that the sum of the squares
// of the two sides of the right angle triangle is equal to the square
// .of the hypotenuse
void pythagorean(){
    float m, n, a, b, c;
    cout << "8-Pythagorean Theorem" << endl;
    cout << "\tenter m value: " , cin >> m;
    cout << "\tenter n value: " , cin >> n;
    a = pow(m,2) - pow(n,2);
    b = 2*m*n;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << "\ta:" << a<< "\tb:" << b<< "\tc:" << c << endl << endl;
}

// 9- Write a C++ program that for a given number of apples, tells
// the user how many dozens of apples(s) he has and how many
// .extra apples are left over
void dozen_calc(){
    int apples, dozens;
    cout << "9-tells the user how many dozens of apples" << endl;
    cout << "\tenter apples number: " , cin >> apples;
    dozens = apples / 12;
    apples = apples % 12;
    cout << "\t" << dozens << " dozens and " << apples << " apples" << endl << endl;
}

int main(){
    calc_resistance();
    count_change();
    pythagorean();
    dozen_calc();
    return 0;
}