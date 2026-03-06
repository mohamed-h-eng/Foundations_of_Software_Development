# include <iostream>
using namespace std;

// int sum(int x , int y){
//     return x + y;
// }

// int subtract(int x , int y){
//     return x - y;
// }

// int multiply(int x , int y){
//     return x * y;
// }

// int divide(int x , int y){
//     return x / y;
// }

int calc( int x, int y , char sign){
    int r;
    switch(sign){
        case '+':r = x+y;break;
        case '-':r = x-y;break;
        case '*':r = x*y;break;
        case '/':r = x/y;break;
    }
    return r;
}
int select_operator(char input, int x, int y){
    int r;
    switch(input){
        case 'a': r = calc(x,y,'+');break;
        case 'b': r = calc(x,y,'-');break;
        case 'c': r = calc(x,y,'*');break;
        case 'd': r = calc(x,y,'/');break;
        default: cout << "invalid input.";
    };
    return r;
}

int main(){
    char input;
    int x, y;
    cout << "enter input: " , cin >> input;
    cout << endl << "enter x value: ", cin >> x;
    cout << endl << "enter y value: ", cin >> y;
    cout << endl << "result: " << select_operator(input, x, y);
    return 0;
}