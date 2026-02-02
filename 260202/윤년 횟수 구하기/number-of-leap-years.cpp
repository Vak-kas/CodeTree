#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int year;
    cin >> year;

    int cnt=0;
    for(int i=1;i<=year;i++){
        if(i%100 == 0 && i%400 !=0){
            continue;
        }
        else if(i%4 == 0){
            cnt++;
        }
    }

    cout << cnt ;
    return 0;
}