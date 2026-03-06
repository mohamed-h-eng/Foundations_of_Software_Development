# include <iostream>
using namespace std;

int main (){
    int a[10];
    int i;
    for(i=0;i < 10;i++){
        a[i] = i*i;
    }
    for(i=0;i<10;i+=2){
        cout << a[i] << endl;
    }
    return 0;
}