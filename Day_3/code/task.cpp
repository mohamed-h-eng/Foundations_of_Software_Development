# include <iostream>
# include <string>
using namespace std;

int main(){
    int char_counter = 0;
    char x;
    int uppercase_counter = 0;
    while (char_counter<=100){
        cin  >> x;
        if (x=='.'){
            break;
        }
        if(isupper(x)){
            uppercase_counter ++;
        }
        char_counter++;
    }
    cout << char_counter;
    return 0;
}

// int cout_uppercase(){
//     int char_counter = 0;
//     char x;
//     int uppercase_counter = 0;
//     while (char_counter<=100){
//         cin  >> x;
//         if (x=='.'){
//             break;
//         }
//         if(isupper(x)){
//             uppercase_counter ++;

//         }
//         char_counter++;
//     }
//     return uppercase_counter;
// }