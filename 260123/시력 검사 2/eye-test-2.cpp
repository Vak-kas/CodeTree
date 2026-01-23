#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double n;
    cin >> n;

    if(n >= 1.0) {
        cout << "High" << endl;
    }
    else if(n >= 0.5){
        cout << "Middle" << endl;
    }
    else{
        cout << "Low" << endl;
    }
    return 0;
}