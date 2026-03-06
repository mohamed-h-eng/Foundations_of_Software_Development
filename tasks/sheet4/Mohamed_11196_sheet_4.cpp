# include <iostream>
# include <string>
# include <cmath>
using namespace std;

// function to get maximum, minimum, average from 10 float values
void calc_metrics(){
    cout << "\n\nfunction to get maximum, minimum, average from 10 float values" << endl;
    string input;
    int n = 10;
    float *arr = new float[n];
    for(int i =0;i<n;i++){
        cout << "\tenter number " << i+1 << " value: " , cin >> arr[i];
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
    cout << "\tthe maximum is : " << max << endl;
    cout << "\tthe minimum is : " << min << endl;
    cout << "\tthe average is : " << avg/n;
}

//function to read set of float data values, count values, average, standard deviation
void equation(){
    cout << "\n\nfunction to read set of float data values, count values, average, standard deviation"<< endl;
    float x;
    float sum = 0.0;
    float sumSq = 0.0;
    int n = 0;
    cout << "\tenter floating-point numbers: ";
    while (cin >> x) {
        sum += x;
        sumSq += x * x;
        n++;
    }
    if (n > 1) {
        float mean = sum / n;
        float stddev = sqrt((sumSq - (sum * sum) / n) / (n - 1));

        cout << "\tcount: " << n << endl;
        cout << "\taverage: " << mean << endl;
        cout << "\tstandard deviation: " << stddev << endl;
    }
}

// function to get number of occurrences of a string in another string
void occurrence(){
    cout << "\n\nfunction to get number of occurrences of a string in another string" << endl;
    string first, second;
    cout << "\n\tenter first phrase: " , getline(cin,first);
    cout << "\n\tenter second phrase: ", getline(cin,second);
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
    cout << "\tcount: " << count;
}

// function to sort given 15 integer in ascending and descending order
void sort(){
    cout << "\n\nfunction to sort given 15 integer in ascending and descending order" << endl;
    int input;
    int arr[15];
    for(int i =0;i<15;i++){
        cout << i+1 << ". enter number: " ,cin >> input;
        arr[i] = input;
    }
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
    cout << "\tascending: ";
    for(int i =0;i<15;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "\tdecending: ";
    for(int i =0; i<15;i++){
        cout << dsc[i] << " ";
    }
}

// function to reverse given string
void reverse(){
    cout << "\n\nfunction to reverse given string" << endl;
    string input, temp;
    cout << "\tenter strgin: " ,getline(cin, input);
    for(int i =0;i < input.length();i++){
        temp += input[(input.length()-1)-i];
    }
    cout << "\t" << input << endl;
    cout << "\t" << temp;
}

int main(){
    // occurrence();
    // sort();
    // reverse();
    // calc_metrics();
    // equation();
    return 0;
}