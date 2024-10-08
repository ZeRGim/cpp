#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num1;
    int num2;
public:
    SoSimple(int n1, int n2) : num1(n1), num2(n2) { }
    SoSimple(const SoSimple &copy) : num1(copy.num1), num2(copy.num2) {cout<<"Called SoSimple(SoSimple &copy)"<<endl;}
    void ShowSimpleData() const
    {
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
};

int main(void)
{
    SoSimple sim1(15,30);
    cout<<"생성 및 초기화 직전"<<endl;
    SoSimple sim2=sim1; // SoSimple sim2(sim1)로 자동변환 explicit 를 사용하면 이러한 자동변환을 허용하지 않을 수 있다.
    cout<<"생성 및 초기화 직후"<<endl;
    sim2.ShowSimpleData();
    return 0;
}