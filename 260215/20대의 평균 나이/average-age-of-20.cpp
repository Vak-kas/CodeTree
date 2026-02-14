#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum = 0, count = 0;
    int age;

    while(true){
        cin >> age;
        if(age >=20 && age<30){
            sum+=age;
            count++;

        }
        else{
            break;
        }
        
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)sum/count << endl;
    return 0;
}