#include <iostream>
using namespace std;

void printTrue()
{
    cout << "1" << endl;
}

void printFalse()
{
    cout << "0" << endl;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    if(a>=b){
        printTrue();
    }
    else{
        printFalse();
    }


    if(a>b){
        printTrue();
    }
    else{
        printFalse();
    }

    if(b>=a){
        printTrue();
    }
    else{
        printFalse();
    }
    if(b>a){
        printTrue();
    }
    else{
        printFalse();
    }
    if(a==b){
        printTrue();
    }
    else{
        printFalse();
    }
    if(a!=b){
        printTrue();
    }
    else{
        printFalse();
    }
    return 0;
}