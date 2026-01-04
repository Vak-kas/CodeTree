#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    if(a>b && b>c){
        cout << b;
    }
    else if(a>c && c>b){
        cout << c;
    }
    else if(b>a && a>c){
        cout << a;
    }
    else if(b>c && c>a){
        cout << c;
    }
    else if(c>a && a>b){
        cout << a;
    }
    else {
        cout << b;
    }
    return 0;
}