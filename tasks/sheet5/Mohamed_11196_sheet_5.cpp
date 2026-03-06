#include <iostream>
using namespace std;

// 1-write a statement that displays the address of the variable testvar 
// answer: cout << &testvar;

// 2-the contents of two pointers that point
//   to adjacent variables of type float differ by
// answer: 4 bytes

// 3-a pointer is:
// answer: c.a variable for storing addresses

// 4-write expressions for the following:
// a. the address of var: &var;
// b. the contents of the variable pointed to by var: *var
// c. the variable var used as a reference argument: &var
// d. the data type pointer-to-char: char*

// 5-an address is a location, while a pointer is a variable that stores a location.

// 6-definition for a variable of type pointer-to-float:float* ptr;

// 7-pointers are useful for referring to a memory address that has no variable name.

// 8-if testptr points to testvar, a statement that represents the contents of testvar without using its name:
// answer: *testptr

// 2
void average_array() {
    int size = 1;
    float *numbers = new float[size];
    while (cin >> numbers[size-1]){
        size ++;
    }
    float average = 0;
    for(int i =0;i< size;i++){
        average += numbers[i];
    }
    cout << average/(size-1);
}


// 3
void addarrays(float *p_1,float *p_2,float *p_3,int s){
    for(int i =0;i < s;i++){
        p_3[i] = p_1[i] + p_2[i];
    }
}

int main(){
    int size = 5;
    float arr_1[] = {10,20,30,40,50};
    float arr_2[] = {1.2,3.4,5.6,7.8,9.0};
    float arr_3[5];
    addarrays(arr_1,arr_2, arr_3,size);
    
    for(int i =0;i<size;i++){
        cout << arr_3[i] << endl;
    }
    return 0;
}