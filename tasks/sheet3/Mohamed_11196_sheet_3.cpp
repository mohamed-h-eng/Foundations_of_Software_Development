# include <iostream>
# include <cmath>
# include <string>
using namespace std;

void number_to_letters(){
    cout << "2-program to convert numbers to its letters\n";
    string store = "", phrase;
    cout << "\tenter your value: " , getline(cin, phrase);
    string num_list[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i =0;i<=phrase.length();i++){
        if (phrase[i] >= '0' && phrase[i] <='9'){
            store += num_list[phrase[i] - '0'];
        }
        else{
            store += phrase[i];
        }
    }
    cout << "\t" << store << endl << endl;
}

void count_digits(){
    cout << "3-program to count digits from input\n";
    string input;
    cout << "\tenter value: ", getline(cin,input);
    int result=0;
    for(int i=0;i<=input.length();i++){
        if(input[i]>='0'&& input[i]<='9'){
            result +=1;
        }
    }
    cout << "\tthe input contains " << result;
    cout << endl << endl;
}

void traingle_stars(){
    cout << "3-program to print triangle of stars in 5 lines\n";
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl << endl;
}

void diamond_stars(){
    cout << "4 - Program to print diamond of stars in 5 lines\n";
    int n = 5;
    // cout << "enter n value: " , cin >> n;
    n =(n + 1)/2;
    for (int a = 1; a <= n; a++) {
        for (int c = a; c < n; c++) {
            cout << " ";
        }
        for (int l = 1; l <= (2 * a - 1); l++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    number_to_letters();
    count_digits();
    traingle_stars();
    diamond_stars();
    return 0;
}