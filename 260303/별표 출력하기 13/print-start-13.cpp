#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int p = 1;
    int q = n;

    for(int i=0;i<2*n;i++){
        if(i%2==0){
            for(int j=1;j<=q;j++){
                cout << "* ";
            }
            q--;

        }
        else{
            for(int j=1;j<=p;j++){
                cout << "* ";
            }
            p++;

        }

        cout << endl;
    }
    return 0;
}