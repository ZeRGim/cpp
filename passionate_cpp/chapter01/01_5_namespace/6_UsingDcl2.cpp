#include <iostream>
using std::cin; // using선언을 함수 안에 하면 그 함수에서만 사용 됨 (지역적 선언)
using std::cout; // 하지만 이렇게 밖에다 선언하면 전역 선언이 되어서 어디에서도 이름공간없이 사용가능하다.
using std::endl;

int main(void)
{
    int num = 20;
    cout<<"Hello World!"<<endl;
    cout<<"Hello "<<"World!"<<endl;
    cout<<num<<' '<<'A';
    cout<<' '<<3.14<<endl;
    return 0;
}