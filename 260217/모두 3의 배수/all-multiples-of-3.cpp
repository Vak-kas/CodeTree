#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int tmp;
    bool flag = true;

    for(int i=0;i<5;i++){
        cin >> tmp;
        if(tmp%3 != 0){
            flag = false;
        }
    }


    if(flag){
        cout << 1;
    }
    else{
        cout << 0;
    }


    return 0;
}