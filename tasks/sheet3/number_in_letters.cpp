# include <iostream>
# include <cmath>
using namespace std;

string convert_to_letters(string phrase){
    string store = "";
    string num_list[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i =0;i<=phrase.length();i++){
        if (phrase[i] >= '0' && phrase[i] <='9'){
            cout << phrase[i]-'0' << endl;
            store += num_list[phrase[i] - '0'];
        }
        else{
            store += phrase[i];
        }
    }
    return store;
}

int main(){
    string phrase = "I have 4 Networking books, 6 Database books, and 2 Programming books.";
    cout << convert_to_letters(phrase);
    return 0;
}

