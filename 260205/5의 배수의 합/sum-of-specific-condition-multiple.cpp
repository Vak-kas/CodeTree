#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a>> b;

    int s=0;
    if(a>b){
        int tmp = a;
        a = b;
        b = tmp;

    }
    for(int i=a;i<=b;i++){
        if(i%5==0){
            s+=i;

        }

    }
    cout<<s;
    return 0;
}