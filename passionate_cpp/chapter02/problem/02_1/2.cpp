#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void)
{
    int val1 = 10;
    int val2 = 20;

    //SwapByRef2(23, 45); //에러가 뜨는 이유 : 참조자가 들어가야하는데 상수가 들어감
    return 0;
}