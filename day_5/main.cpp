# include <iostream>
using namespace std;

int main(){
    int n[6] = {10,60,20,40,30,5};
    int sum =0;
    for(int i=0;i < 6 ;i++){
        sum = sum + n[i];
    }
    
    cout << "average is: " << sum / 6 << endl;

    int max = 0;
    for(int i =0;i<6;i++){
        if(n[i] > max){
            max = n[i];
        }
    }

    cout << "max is: " << max ;
    return 0;
}