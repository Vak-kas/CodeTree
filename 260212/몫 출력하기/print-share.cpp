#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count = 0;
    int tmp;
    while(true){
        if(count >=3){
            break;
        }

        cin >> tmp;

        if(tmp%2 == 0){
            cout << tmp/2 << endl;
            count++;
        }

    }
    return 0;
}