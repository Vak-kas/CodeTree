#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n ;
    cin >> n;

    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;

        if((tmp%2 == 1) && (tmp%3 == 0)){
            cout << tmp << endl;
        }
    }
    return 0;
}