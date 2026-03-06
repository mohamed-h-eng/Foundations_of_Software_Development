# include <iostream>
using namespace std;

int rectangle_area(int x, int y){
    return x * y;
}

int main(){
    int length, width;
    cout << "enter length: ", cin >> length;
    cout << "enter length: ", cin >> width;
    cout << "The area is: " << rectangle_area(length, width);
    return 0;
}