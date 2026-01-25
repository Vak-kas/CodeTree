#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    if(n == 1 || n == 3 || n == 5 || n ==7 || n ==8 || n ==10 || n == 12){
        cout << 31 << endl;
    }
    else if(n==2){
        if(n%4 == 0){
            if(n%100 == 0 && n%400 !=0){
                cout << 29 << endl;
            }
            else{
                cout << 28 << endl;
            }

        }
        else{
            cout << 28 << endl;
        }
    }
    else{
        cout << 30 << endl;
    }

    
    return 0;
}