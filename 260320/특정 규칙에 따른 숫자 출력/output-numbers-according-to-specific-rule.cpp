#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 1;


    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout << cnt << " ";
                cnt++;
                if(cnt >=10){
                    cnt =1;
                }
            }
            else{
                cout << "  "; 
            }

        }
        cout << endl;
    }
    return 0;
}