#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int i=1;
    while (true){
        n/=i;
        if(n<=1){
            cout << i;
            break;
        }
        i++;

    }
    return 0;
}