#include <iostream>
using namespace std;

char check(char flue, int fever){
    if(fever >=37){
        if(flue == 'Y'){
            return 'A';
        }
        else {
            return 'B';
        }
    }
    else{
        if(flue=='Y'){
            return 'C';
        }
        else{
            return 'D';
        }
    }
}

int main() {
    // Please write your code here.
    char flue_a, flue_b, flue_c;
    int fever_a, fever_b, fever_c;

    cin >> flue_a >> fever_a;
    cin >> flue_b >> fever_b;
    cin >> flue_c >> fever_c;

    int count= 0;
    if(check(flue_a, fever_a) == 'A'){
        count +=1;
    }
    if(check(flue_b, fever_b) == 'A')
    {
        count +=1;
    }
    if(check(flue_c, fever_c) == 'A')
    {
        count +=1;

    }

    if(count >=2){
        cout << "E" << endl;
    }
    else{
        cout << "N" << endl;
    }


    return 0;
}