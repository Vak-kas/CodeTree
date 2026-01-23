#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    bool flag = false;

    if(a == 5){
        cout << "A" << endl;
        flag = true;
    }

    if(a %2 == 0){
        cout << "B" << endl;
        flag = true;
    }
    return 0;
}