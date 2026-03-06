#include <iostream>
# include <string>
using namespace std;

void count_vowels(){
    string input;
    getline(cin , input);
    int count = 0;
    for(int i =0; i < input.length();i++){
        switch(input[i]){
            case 'a':count++;break;
            case 'A':count++;break;
            case 'e':count++;break;
            case 'E':count++;break;
            case 'i':count++;break;
            case 'I':count++;break;
            case 'o':count++;break;
            case 'O':count++;break;
            case 'u':count++;break;
            case 'U':count++;break;
        }
    }
    cout << count;
}

void rev(){
    cout << "function to reverse given string" << endl;
    string input, temp;
    cout << "enter string: " ,getline(cin, input);
    for(int i =0;i < input.length();i++){
        temp += input[(input.length()-1)-i];
    }
    cout << temp;
}

void palindrom(){
    string input, res;
    getline(cin, input);
    if(input.length()%2 != 0){
        for(int i =0;i<input.length()/2;i++){
            if(input[i] == input[(input.length()-1)-i]){
                res = "YES";
            }else{
                res = "No";
            }
        }
    }
    cout << res;
}