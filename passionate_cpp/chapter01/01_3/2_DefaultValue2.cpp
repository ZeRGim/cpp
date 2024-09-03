#include <iostream>
int Adder(int num1=1, int num2=2); //디폴트값은 선언 부분에서만 정의

int main(void)
{
    std::cout<<Adder()<<std::endl; //num1 = 1, num2 = 2
    std::cout<<Adder(5)<<std::endl; //num1 = 5, num2 = 2
    std::cout<<Adder(3,5)<<std::endl; //num1 = 3, num2 = 5
    return 0;
}

int Adder(int num1, int num2)
{
    return num1 + num2;
}