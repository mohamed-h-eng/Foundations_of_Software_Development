#include <iostream>
# include <string>
using namespace std;

int main(){
    string input, res;
    getline(cin, input);
    if(input.length()%2 != 0){
        for(int i =0;i<input.length()/2;i++){
            if(input[i] == input[(input.length()-1)-i]){
                res = "YES";
            }else{
                res = "No";
            }
        }
    }
    cout << res;
    return 0;
}