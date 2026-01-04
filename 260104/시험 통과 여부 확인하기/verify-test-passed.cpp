#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x ;
    cin >> x;

    if(x>=80)
    {
        cout << "pass" << endl;
    }
    else
    {
        cout << 80-x << " more score" << endl;
    }
    return 0;
}