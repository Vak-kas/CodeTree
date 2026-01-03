#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int total  = a+b+c;
    double average = (double)total / 3;
    double fin = total - average;

    cout << total << endl;
    cout << average << endl;
    cout << fin << endl;
    return 0;
}