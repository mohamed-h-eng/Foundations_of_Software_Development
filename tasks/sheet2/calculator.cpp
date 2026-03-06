# include <iostream>
using namespace std;

int main(){
    int x, y;
    char sign;
    cout << "enter number: ", cin >> x;
    cout << "enter sign: ", cin >> sign;
    cout << "enter number: ", cin >> y ;
    switch(sign){
        case '+':cout << "result: " << (x+y);break;
        case '-':cout << "result: " << x-y;break;
        case '*':cout << "result: " << x*y;break;
        case '/':cout << "result: " << x/y;break;
        default:cout << "Invalid input";
    }
    return 0;
}