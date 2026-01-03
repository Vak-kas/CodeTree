#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int total = a+b;




    cout << a+b << " ";

    cout << fixed;
    cout.precision(1);
    cout << double(total) / 2;
    return 0;
}