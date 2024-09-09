#include <iostream>
using namespace std;

namespace CAR_CONST // 외부 공간에 enum으로 상수지정
{
    enum
    {
        ID_LEN =20,
        MAX_SPD =200,
        FUEL_STEP =2,
        ACC_STEP =10,
        BRK_STEP =10
    };
}


struct Car
{
    char gamerID[CAR_CONST::ID_LEN]; //namespace :: 연산자 사용해야됨
    int fuelGauge;
    int curSpeed;

    void ShowCarState()
    {
        cout<<"소유자 ID: "<<gamerID<<endl;
        cout<<"연료량: "<<fuelGauge<<endl;
        cout<<"현재속도: "<<curSpeed<<endl;
    }

    void Accel()
    {
        if(fuelGauge<=0)
            return;
        else
            fuelGauge-=CAR_CONST::FUEL_STEP;
        
        if(curSpeed+CAR_CONST::ACC_STEP>=CAR_CONST::MAX_SPD)
        {
            curSpeed=CAR_CONST::MAX_SPD;
            return;
        }

        curSpeed+=CAR_CONST::ACC_STEP;
    }

    void Break()
    {
        if(curSpeed<CAR_CONST::BRK_STEP)
        {
            curSpeed=0;
            return;
        }

        curSpeed -= CAR_CONST::BRK_STEP;
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
