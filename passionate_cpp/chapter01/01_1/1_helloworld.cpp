#include <iostream> // 입출력 헤더파일 iostream

using namespace std;

int main(void)
{
    int num=20;
    std::cout<<"Hello World!"<<std::endl; //std:cout<<'출력내용';
    std::cout<<"Hello "<<"World!"<<std::endl; // << 자체도 연산자. 2개이상의 출력이 가능.
    std::cout <<num<<' '<<'A',
    std::cout<<' '<<3.14<<std::endl; // std::endl 개행
    return 0;
}