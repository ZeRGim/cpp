#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void);
}
namespace BestComImpl
{
    void PrettyFunc(void);
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
    PrettyFunc(); // 같은 이름공간이면 명시할 필요X
    FrogComImpl::SimpleFunc(); // 다른 이름공간이면 명시 OO
}
void BestComImpl::PrettyFunc(void)
{
    std::cout<<"QWEQE"<<std::endl;
}
void FrogComImpl::SimpleFunc(void)
{
    std::cout << "fc" << std::endl;
}