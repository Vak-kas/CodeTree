#include <iostream>
using namespace std;
#include <string>

void grade(std::string g)
{
    cout << g.c_str() << endl;
}

int main() {
    // Please write your code here.
    int score;
    cin >> score;

    if(score >=90)
    {
        grade("A");
    }
    else if(score>=80){
        grade("B");
    }
    else if(score>=70){
        grade("C");
    }
    else if(score>=60){
        grade("D");
    }
    else{
        grade("F");
    }
    return 0;
}