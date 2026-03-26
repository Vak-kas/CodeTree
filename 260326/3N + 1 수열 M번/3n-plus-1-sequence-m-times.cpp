#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int k;
    cin >> k;

    for(int i=0;i<k;i++){
        int count = 0;
        int n;
        cin >> n;

        while(true)
        {
            if(n==1){
                break;
            }
            if(n%2==0){
                n/=2;
            }
            else{
                n = 3*n +1;
            }
            count++;
        }

        cout << count<<endl;

    }

    return 0;
}