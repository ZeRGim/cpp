#include <iostream>
#include "headerF.h"

void BestComImpl::SimpleFunc(void) // 정의할때도 name::func
{
    std::cout << "bc" << std::endl;
}
void FrogComImpl::SimpleFunc(void)
{
    std::cout << "fc" << std::endl;
}