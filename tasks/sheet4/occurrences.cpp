# include <iostream>
# include <string>
using namespace std;

int main(){
    string first, second;
    cout << "enter first phrase: " , getline(cin,first);
    cout << "enter second phrase: ", getline(cin,second);
    int count_success = 0;
    int count = 0 ;
    for(int i =0;i<second.length();i++){
        if(first[count_success] == second[i]){
            count_success ++;
        }else{
            count_success =0;
        }
        if(count_success==first.length()){
            count ++;
            count_success = 0;
        }
    }
    cout << count;
    return 0;
}