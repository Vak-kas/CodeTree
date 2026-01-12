#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Please write your code here.
    int index = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0; j<i;j++)
        {
            cout << index << " ";
            index++;
        }
        cout << endl;
    
    }
    return 0;
}