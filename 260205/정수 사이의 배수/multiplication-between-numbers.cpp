#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int s = 0;
    int c = 0;

    for(int i=a;i<=b ;i++){
        if(i%5==0 || i%7==0)
        {
            s+=i;
            c++;
        }
    }

    cout << s << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)s/c << endl;
    return 0;

}