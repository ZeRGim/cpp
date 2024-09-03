#include <iostream>
int BoxVolume(int length, int width=1, int height=1); // 매개변수가 왼쪽에서부터 채워지기 때문에, 디폴트값을 설정할 것을
// 오른쪽에 배치하는 것이 좋다.
int main(void)
{
    std::cout<<"[3, 3, 3]"<<BoxVolume(3, 3, 3)<<std::endl;
    std::cout<<"[5, 5, D]"<<BoxVolume(5, 5)<<std::endl;
    std::cout<<"[7, D, D]"<<BoxVolume(7)<<std::endl;
    //std::cout<<"[D, D, D]"<<BoxVolume()<<std::endl;
    return 0;
}

int BoxVolume(int length, int width, int height)
{
    return length*width*height;
}