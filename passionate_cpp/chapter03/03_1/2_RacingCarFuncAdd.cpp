#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState() // 구조체 안에 함수를 넣을 수 있다.
    {
        cout<<"소유자 ID: "<<gamerID<<endl; //매개변수를 통해 받는 것이 아니기 때문에 그냥 변수명을 쓰면 됨
        cout<<"연료량: "<<fuelGauge<<endl;
        cout<<"현재속도: "<<curSpeed<<endl;
    }

    void Accel()
    {
        if(fuelGauge<=0)
            return;
        else
            fuelGauge-=FUEL_STEP;
        
        if(curSpeed+ACC_STEP>=MAX_SPD)
        {
            curSpeed=MAX_SPD;
            return;
        }

        curSpeed+=ACC_STEP;
    }

    void Break()
    {
        if(curSpeed<BRK_STEP)
        {
            curSpeed=0;
            return;
        }

        curSpeed -= BRK_STEP;
    }
};


int main(void)
{
    Car run99={"run99", 100, 0};
    run99.Accel(); //파이썬 처럼 다루네
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77={"sped77", 100, 0};
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();
    return 0;
}
