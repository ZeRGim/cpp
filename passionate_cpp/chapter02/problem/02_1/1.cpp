#include <iostream>
using namespace std;

void plus_(int &num)
{
    num += 1;
}

void reverse(int &num)
{
    num = -num;
}

int main(void)
{
    int val = 10;
    int &ref = val;
    plus_(ref);
    cout<<val<<endl;
    reverse(ref);
    cout<<val<<endl;
    return 0;
}