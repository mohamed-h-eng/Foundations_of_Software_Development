# include <iostream>
# include <cmath>
using namespace std;

int main(){
    float a, b, c, x, x1, x2;
    cout << "enter a value: " , cin >> a;
    cout << "enter b value: " , cin >> b;
    cout << "enter c value: " , cin >> c;
    switch((b*b) > (4*a*c)){
        case 1:
            x1 = (-b + sqrt((b*b)+4*a*c))/2*a;
            x2 = (-b + sqrt((b*b)-4*a*c))/2*a;
            cout << "x1: " << x1 << endl;
            cout << "x2: " << x2;break;
        default:cout << "equation not solvable";break;
    }
    return 0;
}