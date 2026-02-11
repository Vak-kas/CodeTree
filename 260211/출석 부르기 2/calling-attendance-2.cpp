#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int tmp;
    while(true){
        cin >> tmp;
        if(tmp == 1){
            cout << "John" << endl;
        }
        else if(tmp == 2){
            cout << "Tom" << endl;
        }
        else if(tmp == 3){
            cout << "Paul" << endl;
        }
        else if(tmp == 4){
            cout << "Sam" << endl;
        }
        else{
            cout << "Vacancy" << endl;
            break;
        }

    }

    return 0;
}