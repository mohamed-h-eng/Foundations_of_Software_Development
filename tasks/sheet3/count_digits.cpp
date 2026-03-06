# include <iostream>
using namespace std;

int main(){
    string input = "234abc423";
    int result=0;
    for(int i=0;i<=input.length();i++){
        if(input[i]>='0'&& input[i]<='9'){
            result +=1;
        }
    }
    cout << "the input contains " << result;
    return 0;
}