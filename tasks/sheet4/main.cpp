# include <iostream>
# include <string>
using namespace std;

int main(){
    string input, temp;
    cout << "enter strgin: " ,getline(cin, input);
    for(int i =0;i < input.length();i++){
        temp += input[(input.length()-1)-i];
    }
    cout << input << endl;
    cout << temp;
    return 0;
}