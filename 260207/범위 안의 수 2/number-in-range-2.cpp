#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum = 0, cnt = 0;

    for(int i=0;i<10;i++){
        int tmp = 0;
        cin >> tmp;

        if(tmp>=0 && tmp <=200){
            sum+=tmp;
            cnt++;
        }
    }

    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum/cnt;
    
    return 0;
}