#include <iostream>

int main(void)
{
    int formal_salary = 50;
    int selling = 0;
    double bonus_rate = 0.12;
    while(true){
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin>>selling;
        if(selling != -1){
            std::cout<<"이번 달 급여: "<<formal_salary+(selling*bonus_rate)<<"만원"<<std::endl;
        }
        else break;
    }
    std::cout<<"프로그램을 종료합니다.";
}