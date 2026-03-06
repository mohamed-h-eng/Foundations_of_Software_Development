# include <iostream>
using namespace std;

int main(){
    // define variables
    float quarter, dime, nickel, cent, total;
    // get inputs
    cout << "enter quarters: " ,cin >> quarter;
    cout << "enter dime: " ,cin >> dime;
    cout << "enter nickel: " ,cin >> nickel;
    cout << "enter cent: " ,cin >> cent;
    // calculate total in dollars and cents
    total = ((dime * 10) + (nickel * 5) + (quarter * 25) + cent)/100;
    cout << "total in dollars and cents: " << total;
    return 0;
}