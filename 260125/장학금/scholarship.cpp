#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    if(a >=90){
        if(b>=95){
            cout << 100000 << endl;
        }
        else if(b>=90){
            cout << 50000 << endl;
        }
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}