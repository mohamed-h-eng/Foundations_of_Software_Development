# include <iostream>
# include <string>
using namespace std;

int main(){
    cout << "function to reverse given string" << endl;
    string input, temp;
    cout << "enter string: " ,getline(cin, input);
    for(int i =0;i < input.length();i++){
        temp += input[(input.length()-1)-i];
    }
    cout << temp;
    return 0;
}