#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref) // 매개변수에 const를 붙인다면, 이 함수를 통해 참조자의 값이 변하지 않게 할 수 있다.
{
    ref++; // 참조자에 의한 call-by-reference > 전역값이 증가
    return ref;
}

int main(void)
{
    int num1 = 1;
    int &num2=RefRetFuncOne(num1); // 참조자가 리턴돼서 참조자로 받앗음 . num1과 num2는 동일한 변수에 대한 다른 이름이 됨

    num1++;
    num2++;
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
    return 0;
}

