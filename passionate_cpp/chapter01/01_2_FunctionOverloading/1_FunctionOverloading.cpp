#include <iostream> //C와 다르게 C++은 함수 오버로딩이 된다.
//C는 함수 이름만으로 함수를 찾지만, C++은 함수 이름과 매개변수를 인식해서 함수를 찾는다.
void MyFunc(void)
{
    std::cout<<"MyFunc(void) called"<<std::endl;
}

void MyFunc(char c)
{
    std::cout<<"MyFunc(char c) called"<<std::endl;
}

void MyFunc(int a, int b)
{
    std::cout<<"MyFunc(int a, int b) called"<<std::endl;
}

int main(void)
{
    MyFunc();
    MyFunc('A');
    MyFunc(12,13);
    return 0;
}