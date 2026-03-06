# include <iostream>
using namespace std;

void countdown(int n){
    cout << n << endl;
    if(n == 1){
        cout << "Blast off!";
    }else{
        countdown(--n);
    }
}

int main(){
    int n;
    cout << "enter number: " , cin >> n;
    countdown(n);
    return 0;
}