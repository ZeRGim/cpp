#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n): num(n) { }
    SoSimple(const SoSimple &copy) : num(copy.num)
    {
        cout<<"Called SoSimple(const SoSimple &copy)"<<endl;
    }
    void ShowData() const
    {
        cout<<"num: "<<num<<endl;
    }
    SoSimple& Addnum(int n)
    {
        num += n;
        return *this;
    }
};

SoSimple SimpleFuncObj(SoSimple ob) // 매개변수로 객체가 전달되면서, 그 매개변수에게 객체가 복사가 됨. (매개변수도 메모리를 차지함)
{
    cout<<"리턴 이전"<<endl;
    return ob;
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj).Addnum(30).ShowData();
    obj.ShowData();
    return 0;
}