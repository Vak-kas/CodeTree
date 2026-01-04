#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int book = 3000;
    int mask = 1000;

    int n;
    cin >> n;

    if(n/book)
    {
        cout << "book" << endl;
    }
    else if(n/mask)
    {
        cout << "mask" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}