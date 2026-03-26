#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;
        int k = 1;

        for(int j =a;j<=b;j++){
            k*=j;
        }
        cout << k << endl;
    }
    return 0;
}