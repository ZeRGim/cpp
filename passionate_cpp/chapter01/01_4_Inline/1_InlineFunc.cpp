#include <iostream>

inline int SQUARE(int x) // inline 키워드로 지정 (자료형에 의한 손상 가능성 // 매크로함수는 자료형 제한이 없음) > 템플릿으로 해결 가능
{
    return x*x;
}

int main(void)
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    return 0;
}