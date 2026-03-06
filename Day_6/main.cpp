# include <iostream>
using namespace std;

// int factorial(int n){
//     if (n==1){
//         return 1;
//     }else{
//         return n * factorial(n-1);
//     }
// }

// int main(){
//     int n = 3;
//     cout << factorial(n);
//     return 0;
// }

// string flip(string input, int n){
//     if (n >= 0){
//         return input[n] + flip(input,n-1);
//     }
//     return "";
// }

// int main(){
//     string input = "Mohamed";
//     cout << flip(input,input.length());
//     return 0;
// }

int main() {
    int n;
    int num;
    cin >> n;
    cin >> num;
    cout << n << " " << num;

    return 0;
}