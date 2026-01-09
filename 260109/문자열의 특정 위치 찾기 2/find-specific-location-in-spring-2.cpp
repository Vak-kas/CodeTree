#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    cin >> a;

    string st[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char third[5] = {'p', 'n', 'a', 'u', 'a'};
    char fourth[5] = {'l', 'a', 'p', 'e', 'n'};

    int count = 0;
    for(int i=0;i<5;i++){
        if(a == third[i] || a==fourth[i])
        {
            cout << st[i] << endl;
            count +=1;
        }

    }
    cout << count << endl;
    return 0;
}