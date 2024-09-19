#include <iostream>
using namespace std;

class TwoNumber
{
private:
    int num1, num2;
public:
    TwoNumber(int num1, int num2)
    {
        this->num1=num1; //this->num1 은 멤버변수 num1, 오른쪽의 num1은 매개변수 num1을 의미
        this->num2=num2;
    }
    // TwoNumber(int num1, int num2) : num1(num1), num2(num2) {} 이렇게 정의해도 문제는 X 알아서 매개변수와 멤버변수를 구분함
    void ShowTwoNumber() const
    {
        cout<<this->num1<<endl;
        cout<<this->num2<<endl;
    }
};

int main()
{
    TwoNumber two(2,4);
    two.ShowTwoNumber();
    return 0;
}