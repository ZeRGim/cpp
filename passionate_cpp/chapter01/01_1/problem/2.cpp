#include <iostream>

int main(void)
{
    char name[100];
    char number[200];

    std::cout<<"이름입력: ";
    std::cin>>name;

    std::cout<<"전화번호 입력: ";
    std::cin>>number;

    std::cout<<"당신의 이름: "<<name<<"\n당신의 번호: "<<number<<std::endl;
    return 0;
}