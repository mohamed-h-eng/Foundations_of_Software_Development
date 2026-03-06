# include <iostream>
# include <string>
# include <vector>
using namespace std;

int count_char(string input, char target){
    int count =0;
    for(int i =0; i < input.length()-1;i++){
        cout << input[i] << " " << target << " ";
        // if(input[i]==target){
        //     count +=1;
        //     cout << input[i] << endl;
        // }
    }
    return count+1;
}
int main(){
    // 2x1+3x2+4x3=16 
    // 1x1+2x2+1x3=8 
    // 3x1+1x2+2x3+x4=13

    string e = "2x1-3x2+4x3=16";
    
    // count '+' repeatition in equation
    int count = 0;
    for (int i =0; i < e.length();i++){
        if(e[i]=='+'|| e[i]=='-'){
            count++;
        }
    }
    // cout << count;
    // separate equation into parts separated with '+'
    int steps = 0;
    string cache =  "";
    std::vector<string> temp = {};
    for (int i =0;i < count+1; i++){
        cout << e.substr(steps,3) << endl;
        temp.push_back(e.substr(steps,3));
        steps += 4;
    }
    // cout << temp[1] ;
    // take all items except first one to the other side with 
    
    return 0;
}