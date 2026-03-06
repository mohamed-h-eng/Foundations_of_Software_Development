# include <iostream>
using namespace std;
// using std:: cout;
int main(){
    // cout << "Hello" << "World\n";
    // cout << "Hello, world" << std:: endl;
    
    // int x =5, y=6;
    /* cout << ++x << endl;
    cout << y-- << endl;
    cout << x+y << endl;
    cout << x*y << endl;
    cout << (x > y) << endl;
    cout << (x < y) << endl;
    cout << (x == y) << endl;
    cout << (x && y) << endl;
    cout << (x & y) << endl;
    cout << (x | y) << endl;*/
    // cout << (++x+y) << endl;
    // cout << (x+y++) << endl;
    // cout << y << endl;
    
    // int x;
    // cout << "enter input: ",cin >> x;
    // cout << x;

    // int grade;
    // cout << "enter grade:", cin >> grade;
    // if (grade == 100){
    //     cout << "Student Passed with full mark";
    // }
    // else if(grade >= 50 & grade < 100){
    //     cout << "Student Passed Successfuly";
    // }
    // else if(grade > 100){
    //     cout << "input error";
    // }
    // else{
    //     cout << "Student Failed";
    // }
    char tl;
    cout << "enter value: ", cin  >> tl;
    switch(tl){
        case 'r' : cout << "Red"    ; break;
        case 'g' : cout << "Green"  ; break;
        case 'y' : cout << "Yellow" ; break;
        default  : cout << "Invalid";
    }
	return 0;
}