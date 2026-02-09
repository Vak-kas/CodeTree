#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int sum = 0;
    int i=0;

    for(i=1;i<=100;i++){
        sum+=i;
        if(sum>=n){
            break;
        }
        
    }

    cout << i << endl;


    return 0;
    
}