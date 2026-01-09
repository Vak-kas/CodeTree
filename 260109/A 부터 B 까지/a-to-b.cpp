#include <iostream>
using namespace std;

int main() 
{
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int start = a;
    while(true)
    {
        cout << start << " ";
        if(start % 2 == 1)
        {
            start *=2;
        }
        else
        {
            start +=3;
        }


        if(start > b)
        {
            break;
        }
        

        
    }
    return 0;
}