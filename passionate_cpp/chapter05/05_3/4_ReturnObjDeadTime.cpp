#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n): num(n) { cout<<"New Obj: "<<this<<endl;}
    SoSimple(const SoSimple &copy) : num(copy.num)
    {
        cout<<"New Copy Obj: "<<this<<endl;
    }
    ~SoSimple() {cout<<"Destroy Obj: "<<this<<endl;}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout<<"Parm ADR: "<<&ob<<endl;
    return ob;
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout<<endl;
    SoSimple tempRef = SimpleFuncObj(obj);
    cout<<"Return obj "<<&tempRef<<endl;
    return 0;
}