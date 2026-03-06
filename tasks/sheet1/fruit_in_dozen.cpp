# include <iostream>
using namespace std;

int main(){
    int apples, dozens;
    cout << "enter apples number: " , cin >> apples;
    dozens = apples / 12;
    apples = apples % 12;
    cout << dozens << " dozens and " << apples << " apples";
    return 0;
}