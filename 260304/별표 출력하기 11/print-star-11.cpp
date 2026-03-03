#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int k;
    cin >> k;

    int n = 1 + 2*k;

    // 1 = 3;
    // 2 = 5;
    //3  = 7;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2 == 0 || j %2 == 0){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}