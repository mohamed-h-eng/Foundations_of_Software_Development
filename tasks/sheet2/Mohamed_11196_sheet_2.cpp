# include <iostream>
# include <cmath>
using namespace std;

void quadratic_eq(){
    float a, b, c, x, x1, x2;
    cout << "1-program that prints all solutions to the quadratic equation\n";
    cout << "\tenter a value: " , cin >> a;
    cout << "\tenter b value: " , cin >> b;
    cout << "\tenter c value: " , cin >> c;
    switch((b*b) > (4*a*c)){
        case 1:
            x1 = (-b + sqrt((b*b)+4*a*c))/2*a;
            x2 = (-b + sqrt((b*b)-4*a*c))/2*a;
            cout << "\tx1: " << x1 << endl;
            cout << "\tx2: " << x2;break;
        default:cout << "\tequation not solvable";break;
    }
    cout << endl << endl;
}

void leap_year(){
    int x, y;
    cout << "2-program that asks the user for a year and computes whether that year is a leap year.\n";
    cout << "\tenter year: " , cin >> x;
    if (((x>=1582 && (x%4 == 0 && x%100 != 0)) || (x%400 == 0)) || (x < 1582 && x&4 ==0)){
        cout << "\tit's a leap year";
    }
    else{
        cout << "\tit's not a leap year";
    }
    cout << endl << endl;
}

void month_to_days(){
    cout << "3-Write a program that asks the user to enter a month and then prints the number of days in the month.\n";
    int input;
    cout << "enter month number: " ,cin >> input;
    switch (input) {
    case 1:case 3:case 5:case 7:
    case 8:case 10:case 12:cout << "31 days.";break;
    case 4:case 6:case 11:cout << "30 days.";break;
    case 2:cout << "28 or 29 days.";break;
    }
    cout << endl << endl;

}
void football_move(){
    char move;
    cout << "4-Write a program that reads an input character and prints the proper movement depending on the input character\n";
    cout << "\tchoose your move: ", cin >> move;
    switch(tolower(move)){
        case 'w':cout << "\tMove up" ;break;
        case 's':cout << "\tMove down" ;break;
        case 'd':cout << "\tMove right" ;break;
        case 'a':cout << "\tMove left" ;break;
        case 'k':cout << "\tKick the ball" ;break;
        case 'j':cout << "\tKick the ball" ;break;
        case 'p':cout << "\tpass the ball" ;break;
        case 'o':cout << "\tOver the ball" ;break;
        default :cout << "\tInvalid input";
    }
    cout << endl << endl;
}

void calculator(){
    int x, y;
    char sign;
    cout << "5-Write a C++ program that designs a calculator\n";
    cout << "\tenter number: ", cin >> x;
    cout << "\tenter sign: ", cin >> sign;
    cout << "\tenter number: ", cin >> y ;
    switch(sign){
        case '+':cout << "\tresult: " << (x+y);break;
        case '-':cout << "\tresult: " << x-y;break;
        case '*':cout << "\tresult: " << x*y;break;
        case '/':cout << "\tresult: " << x/y;break;
        default:cout << "\tInvalid input";
    }
    cout << endl << endl;
}

void min_max(){
    int min,max;
    int n1,n2,n3;
    cout << "6-program to find the minimum/maximum of three numbers using the conditional operator ,in just one line\n";
    cout << "\tenter n1 value: " ,cin >> n1;
    cout << "\tenter n2 value: " ,cin >> n2;
    cout << "\tenter n3 value: " ,cin >> n3;
    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    min = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
    cout << "\tmax is: " << max << endl;
    cout << "\tmin is: " << min;
    cout << endl << endl;
}

int main(){
    quadratic_eq();
    leap_year();
    month_to_days();
    football_move();
    calculator();
    min_max();
    return 0;
}