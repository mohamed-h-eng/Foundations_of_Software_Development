# include <iostream>
using namespace std;

int main(){
    int input;
    int arr[15] = {12, 47, 3, 89, 25, 61, 14, 72, 8, 53, 37, 90, 29, 64, 18};
    int dsc[15];
    for(int i =0;i < 15;i++){
        dsc[i] = arr[i];
    }
    int temp;
    for(int i =0;i<15;i++){
        for(int i =0;i<14;i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            if(dsc[i] < dsc[i+1]){
                temp = dsc[i];
                dsc[i] = dsc[i+1];
                dsc[i+1] = temp;
            }
        }
    }
    cout << "ascending: ";
    for(int i =0;i<15;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "decending: ";
    for(int i =0; i<15;i++){
        cout << dsc[i] << " ";
    }
    return 0;
}