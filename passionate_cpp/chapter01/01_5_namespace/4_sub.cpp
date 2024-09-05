#include <iostream>

namespace Parent
{
    int num = 2;

    namespace SubOne // Parent의 하위 namespace
    {
        int num = 3;
    } // namespace SubOne
    namespace SubTwo
    {
        int num = 4;
    } // namespace SubTwo 
} // namespace Parent

int main(void)
{
    std::cout<< Parent::num<<std::endl;
    std::cout<< Parent::SubOne::num<<std::endl; // parent::sub::var 로 호출
    std::cout<< Parent::SubTwo::num<<std::endl;
}
