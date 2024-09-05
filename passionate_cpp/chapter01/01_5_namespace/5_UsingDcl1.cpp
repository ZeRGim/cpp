#include <iostream>

namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout<<"SSF"<<std::endl;
        std::cout<<"INH"<<std::endl;
    }
} // namespace Hybrid

int main(void)
{
    using Hybrid::HybFunc; // using을 이용해 이름공간 생략을 선언
    HybFunc();
    return 0;
}