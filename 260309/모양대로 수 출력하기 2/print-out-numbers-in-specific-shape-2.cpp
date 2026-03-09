#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 2;

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cnt == 10){
                cnt = 2;
            }
            cout << cnt << " ";
            cnt+=2;
        }
        cout << endl;
    }
    return 0;
}