#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void);
}

namespace FrogComImpl
{
    void SimpleFunc(void); // 선언
}

int main(void)
{
    BestComImpl::SimpleFunc();
    FrogComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void) // 정의할때도 name::func
{
    std::cout << "bc" << std::endl;
}
void FrogComImpl::SimpleFunc(void)
{
    std::cout << "fc" << std::endl;
}