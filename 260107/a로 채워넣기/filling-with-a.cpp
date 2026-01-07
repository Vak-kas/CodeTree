#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;

    int last = a.length() -1;

    a[1] = 'a';
    a[last-1] = 'a';

    cout << a << endl;
    return 0;
}