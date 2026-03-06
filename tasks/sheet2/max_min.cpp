# include <iostream>
using namespace std;

int main(){
    int min,max;
    int n1,n2,n3;
    cout << "enter n1 value: " ,cin >> n1;
    cout << "enter n2 value: " ,cin >> n2;
    cout << "enter n3 value: " ,cin >> n3;
    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    min = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
    cout << "max is: " << max << endl;
    cout << "min is: " << min;
    return 0;
}