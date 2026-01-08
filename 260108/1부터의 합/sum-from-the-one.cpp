#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int s = 0;
    int i=1;

    for(i;i<=100;i++){
        s +=i;
        if(s >=n){
            break;
        }

    }

    cout << i << endl;
    return 0;
}