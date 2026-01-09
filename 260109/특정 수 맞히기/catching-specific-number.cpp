#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int tmp;

    while(true)
    {
        cin >> tmp;
        if(tmp < 25)
        {
            cout << "Higher" << endl;
        }
        else if(tmp > 25)
        {
            cout << "Lower" << endl;
        }
        else
        {
            cout << "Good" << endl;
            break;
        }
        
    }
    return 0;
}