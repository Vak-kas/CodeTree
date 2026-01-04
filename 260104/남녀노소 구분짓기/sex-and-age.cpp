#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sex, age;
    cin >> sex >> age;

    if(age >=19){
        if(!sex){
            cout << "MAN";
        }
        else{
            cout << "WOMAN";
        }
    }
    else{
        if(!sex) { 
            cout << "BOY";
        }
        else{
            cout << "GIRL";
        }
    }
    return 0;
}