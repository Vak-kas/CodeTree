#include <iostream>

using namespace std;

int st, ed;

bool tmp[33];
//소수 찾기
void init_tmp()
{
    for(int i=0;i<33;i++){
        tmp[i] = true;
    }
    tmp[0] = false;
    tmp[1] = false;
    for(int i= 2;i<=32;i++)
    {
        if(tmp[i] == true)
        {
            for(int j=i+i;j<=32;j+=i)
            {
                tmp[j] = false;
            }

        }
    }
}

void print_tmp()
{
    for(int i = 0 ; i <= 32 ; i++)
    {
        cout << tmp[i] << " ";
    }
    cout << endl;
}




int main() {

    cin >> st >> ed;
    init_tmp();
    // print_tmp();
    int count = 0;
    int i = 1;
    // Please write your code here.
    
    while(true)
    {
        if(i*i > ed) break;
        if(tmp[i] == true && i*i >=st && i*i <=ed)
        {
            count++;
        }
        i++;

    }
    cout << count;;

    return 0;
}
