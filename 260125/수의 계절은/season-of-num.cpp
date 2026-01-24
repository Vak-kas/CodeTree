#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int month;
    cin >> month;

    if((month >=3) && (month <=5)){
        cout << "Spring" << endl;
    }
    else if((month >=6) && (month <=8)){
        cout << "Summer" << endl;
    }
    else if((month >=9) && (month <=11)){
        cout << "Fall" << endl;
    }
    else{
        cout << "Winter" << endl;
    }
    return 0;
}