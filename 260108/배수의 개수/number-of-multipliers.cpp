#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];

    for(int i=0;i<10;i++){
        cin >>arr[i];
    }

    int sum3 = 0, sum5 = 0;
    for(int i=0;i<10;i++){
        if(arr[i] % 3 == 0){
            sum3++;
        }
        if(arr[i] % 5 == 0){
            sum5 ++;
        }
    }

    cout << sum3 << " " << sum5 << endl;
    return 0;
}