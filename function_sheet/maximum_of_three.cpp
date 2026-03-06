# include <iostream>
using namespace std;

double find_max(double n1, double n2, double n3){
    return n1 > n2? n1 > n3? n1: n3 : n2;
}

int main(){
    double n1,n2,n3;
    cout << "enter first number: " , cin >> n1;
    cout << "enter second number: " , cin >> n2;
    cout << "enter third number: " , cin >> n3;
    cout << "max number is: " << find_max(n1,n2,n3);
    return 0;
}