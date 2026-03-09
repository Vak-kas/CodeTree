#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1){
                cout << j ;
            }
            else{
                cout << n+1-j;
            }
        }
        cout << endl;
    }
    return 0;
}