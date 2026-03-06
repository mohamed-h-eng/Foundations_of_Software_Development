# include <iostream>
using namespace std;

void update(unsigned int *a,unsigned int *b) {
    // Complete this function
    // *a = *a + *b;
    // *b = *b - (*a - *b);
    *a = *a + *b;
    *b = (*a - *b) - *b;
}

int main(){
    // int x;
    // int a[4];
    // cin >> x;
    // cin >> a[0] >> a[1] >> a[2] >> a[3];
    // cout << x << endl;
    // for(int i =x;i>=0;i--){
    //     cout << a[i] << endl;
    // }
    int a, b;
    unsigned int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}