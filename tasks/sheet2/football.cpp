# include <iostream>
# include <cctype>
using namespace std;

int main(){
    char move;
    cout << "choose your move: ", cin >> move;
    switch(tolower(move)){
        case 'w':cout << "Move up" ;break;
        case 's':cout << "Move down" ;break;
        case 'd':cout << "Move right" ;break;
        case 'a':cout << "Move left" ;break;
        case 'k':cout << "Kick the ball" ;break;
        case 'j':cout << "Kick the ball" ;break;
        case 'p':cout << "pass the ball" ;break;
        case 'o':cout << "Over the ball" ;break;
        default :cout << "Invalid input";
    }
    return 0;
}