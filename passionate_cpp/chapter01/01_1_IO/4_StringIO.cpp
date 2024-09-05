#include <iostream>

int main(void)
{
    char name[100];
    char lang[200];

    std::cout<<"이름은 무엇입니까? ";
    std::cin>>name;
    
    std::cout<<"좋아하는 프로그래밍 언어는 무엇인가요? ";
    std::cin>>lang;
    
    std::cout<<"내 이름은 "<<name<<"입니다.\n"; // \n과 같은 특수문자는 여전히 작동함.
    std::cout<<"제일 좋아하는 언어는 "<<lang<<"입니다."<<std::endl;
    return 0;
}