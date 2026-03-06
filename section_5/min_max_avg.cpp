# include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,8,5,9,1};
    int max, min, avg =0 ;
    for(int i =0;i<(sizeof(arr)/4)-1;i++){
        max = arr[i] > arr[i+1] ? arr[i] : arr[i+1];
        min = arr[i] < arr[i+1] ? arr[i] : arr[i+1];
        avg +=arr[i];
    }
    avg = avg/(sizeof(arr)/4);
    cout << max << endl;
    cout << min << endl;
    cout << avg;
    return 0;
}