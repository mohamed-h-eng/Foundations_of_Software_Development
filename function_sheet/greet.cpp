# include <iostream>
# include <string>
using namespace std;

void greet(string name){
    if (name == ""){
        cout << "Hello, Guest! Welcome!";
    }else{
        cout << "Hello, " << name <<"! Welcome!";
    }
}

int main(){
    string name;
    cout << "enter name: ";
    getline(cin, name);
    greet(name);
    return 0;
}