#include <iostream>
using namespace std;


int main() {
    // Please write your code here.
    int a[100] = {-1,};
    int index = 0;

    while(true)
    {
        cin >> a[index];
        if(a[index] == 0)
        {
            break;
        }
        index++;
    }

    for(int i=0;i<index;i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}