# include <iostream>
# include <string>
using namespace std;

int main(){
    string input;
    getline(cin , input);
    int count = 0;
    for(int i =0; i < input.length();i++){
        switch(input[i]){
            case 'a':count++;break;
            case 'A':count++;break;
            case 'e':count++;break;
            case 'E':count++;break;
            case 'i':count++;break;
            case 'I':count++;break;
            case 'o':count++;break;
            case 'O':count++;break;
            case 'u':count++;break;
            case 'U':count++;break;
        }
    }
    cout << count;
    return 0;
}
