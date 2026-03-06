# include <iostream>
using namespace std;

int main(){
//    *    s 3, i 1
//   ***   s 1, i 3
//  *****  s 0, i 5
//   ***   s 1, i 3
//    *    s 3, i 1
    int n = 5;
    int s = (n+1)/2;
    
    for(int i=0;i<=n;i++){
        for(int k=s;k>0;k--){
            cout << "-";
        }
        for(int j = i;j>=0;j--){
            cout << "*";
        }
        if (s>=0){
            s+=1;
        }
        else{
            s-=1;
        }
        cout << endl;
    }
    return 0;
}