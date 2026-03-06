#include "iostream"
#include "vector"
using namespace std;

void display(vector<int>&list){
    cout <<"\n[";
    for(int i=0;i<list.size();i++){
        cout << list[i] << ", ";
    }
    cout <<"]" << endl;
}

int mostFrequentEven(vector<int>& nums) {
    // get max array size
    int max = 0;
    for(int i=0;i<nums.size();i++){
        (nums[i] > max )? max = nums[i] : max;
    }
    // temp array -> even numbers
    vector <int> temp_arr;
    for(int i=0;i<nums.size();i++){
        temp_arr.push_back(0);
    }
    // count repeatition 
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            // cout << nums[i] << endl;
            temp_arr[nums[i]]++;
            // cout << temp_arr[nums[i]] << endl;
        }
    }
    // get most repetition
    max = 0;
    int index = -1;
    int result = 0;
    display(temp_arr);
    for(int i=0;i<temp_arr.size();i++){
        if(temp_arr[i]>max){
            max = temp_arr[i];
            index = i;
            cout << "\n"<< i<< "\n";
        }
        if(max == temp_arr[i]){
            if(nums[i] < nums[index]){
                cout << "here 1";
                return temp_arr[i];
            }   
            else{
                cout << temp_arr[index] << endl;
                return temp_arr[index];
            }
        }else{
            cout << "here 3";
            return  index;
        }
    }
    cout << "here 4";
    return result;
}

int main(){
    vector <int> nums = {0,1,2,2,4,4,1};
    cout << mostFrequentEven(nums);
    return 0;
}



















// void display(int* llist, int *max){
//     cout <<"[";
//     for(int i=0;i<*max;i++){
//         cout << llist[i] << ", ";
//     }
//     cout <<"]" << endl;
// }

// int main(){
//     vector<int> nums = {0,1,2,2,4,4,1};
//     vector<int> even;
//     int max = 0;
//     for(int i=0;i<nums.size();i++){
//         nums[i] > max ? max = nums[i] : max;
//     }

//     cout << "max: " << max <<endl;

//     for(int i=0;i<nums.size();i++){
//         if(nums[i]%2==0){
//             even.push_back(nums[i]);
//         }
//     }
//     cout << "even vector: ";
//     display(even);

//     int *count = new int[max];
//     for(int i=0;i<nums.size();i++){
//         count[i] = 0;
//     }
//     cout << "count array: ";
//     display(count,&max);
//     // for(int i=0;i<nums.size();i++){
//     //     count[nums[i]] =;
//     // }

//     return 0;
// }

// // get even numbers
// // count times of occurrence
// // return the smallest one of them


