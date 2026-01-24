#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int math_a, eng_a;
    int math_b, eng_b;

    cin >> math_a >> eng_a;
    cin >> math_b >> eng_b;

    if(math_a > math_b){
        cout << "A" << endl;
    }
    else if(math_a < math_b){
        cout << "B" << endl;
    }
    else{
        if(eng_a > eng_b){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }


    return 0;
}