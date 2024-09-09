#include <iostream>
using namespace std;

int RefRetFuncOne(int &ref)
{
    ref++; // 참조자에 의한 call-by-reference > 전역값이 증가
    return ref;
}

int main(void)
{
    int num1 = 1;
    int num2=RefRetFuncOne(num1); // 반환형이 int임, int형으로 받음 . num1과 num2는 동일한 변수에 대한 다른 이름이 아닌
    // 각각의 변수가 됨. 값만 받아옴
    num1++; //Two.cpp와 다른점 : 반환을 참조자로 하면 값을 받을 때 참조자로 받을 수도 있고, 일반 변수로 받을 수도 있다.
    // 하지만 그냥 반환시 선택의 여지가 없음.
    num2++;
    cout<<"num1: "<<num1<<endl; // 매개변수가 참조자가 아닌데 반환을 참조자로 반환하면 값이 이상해짐.
    cout<<"num2: "<<num2<<endl;
    return 0;
}

// const int를 참조하기 위해서는 참조자로 받을 때도, const int &가 되어야 한다.
// const int &ref = 30; 과 같이 상수를 참조할 수 있는데, const 참조자는 상수를 참조할 때 임시변수를 만들어 참조가 가능하게 한다.
//그냥 참조자는 안댐
// 이걸 쓰는 이유
int Adder(const int &num1, const int &num2)
{
    return num1 + num2;
}
// Adder(3,2)를 할 수 없는데, const int & 를 통해 임시변수를 만들어 가능하게 한다.