#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    if(N >=100)
    {
        cout << "vapor" << endl;
    }
    else if(N<0)
    {
        cout << "ice" << endl;
    }
    else
    {
        cout << "water" << endl;
    }
    return 0;
}