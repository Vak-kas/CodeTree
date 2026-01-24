#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int age_a, age_b;
    char sex_a, sex_b;

    cin >> age_a >> sex_a;
    cin >> age_b >> sex_b;

    if(((age_a >= 19) && (sex_a == 'M')) || (age_b >= 19) && (sex_b == 'M')){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }

    return 0;
}