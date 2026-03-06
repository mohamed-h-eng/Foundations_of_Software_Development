# include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "enter year: " , cin >> x;
    if (((x>=1582 && (x%4 == 0 && x%100 != 0)) || (x%400 == 0)) || (x < 1582 && x&4 ==0)){
        cout << "it's a leap year";
    }
    else{
        cout << "it's not a leap year";
    }
    return 0;
}