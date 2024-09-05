#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}
namespace FrogComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<"FrogCom이 정의한 함수"<<std::endl;
    }
}

int main(void)
{
    BestComImpl::SimpleFunc(); //namespace::Function
    FrogComImpl::SimpleFunc();
    return 0;
}