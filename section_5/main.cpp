# include <iostream>
using namespace std;

int main(){
    string input = "the these those";
    string target = "the";
    int count=0;
    int count_success = 0 ;
    for(int i=0;i<input.length();i++){
        if(target[count_success] == input[i]){
            count_success++;
        }else{
            count_success=0;
        }
        if(count_success == target.length()){
            count ++;
            count_success=0;
        }
    }
    cout << count;
    return 0;
}