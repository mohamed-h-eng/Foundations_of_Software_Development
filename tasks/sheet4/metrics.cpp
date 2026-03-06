# include <iostream>
# include <string>
using namespace std;

int main(){
    string input;
    int n = 10;
    float *arr = new float[n];
    for(int i =0;i<n;i++){
        cout << "enter number " << i+1 << " value: " , cin >> arr[i];
    }
    float max, min = arr[0], avg=0;
    for(int i = 0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
        avg = avg + arr[i];
    }
    cout << "the maximum is : " << max << endl;
    cout << "the minimum is : " << min << endl;
    cout << "the average is : " << avg/n;
    return 0;
}