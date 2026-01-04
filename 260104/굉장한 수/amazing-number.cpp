#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    bool flag1 = (n%2==1 && n%3==0);
    bool flag2 = (n%2==0 && n%5==0);

    if(flag1 || flag2){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}