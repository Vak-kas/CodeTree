#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int math_a, eng_a;
    cin >> math_a >> eng_a;

    int math_b, eng_b;
    cin >> math_b >> eng_b;


    if((math_a > math_b) && (eng_a > eng_b)){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}