#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int sum = 0;
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;

        if(tmp%2==1 && tmp%3==0){
            sum+=tmp;
        }
    }
    cout << sum << endl;
    return 0;
}