#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref)
{
    ref++; // 참조자에 의한 call-by-reference > 전역값이 증가
    return ref;
}

int main(void)
{
    int num1 = 1;
    int num2=RefRetFuncOne(num1); // 참조자가 리턴됐지만, int형으로 받음 . num1과 num2는 동일한 변수에 대한 다른 이름이 아닌
    // 각각의 변수가 됨. 값만 받아옴
    num1++;
    num2++;
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
    return 0;
}