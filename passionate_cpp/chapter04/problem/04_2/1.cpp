#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    void Init(int x, int y)
    {
        xpos = x;
        ypos = y;
    }
    void ShowPointInfo() const
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
    int GetX() const {return xpos;}
    int GetY() const {return ypos;}
};

class Circle
{
private:
    int myrad;
    Point mypnt;
public:
    void Init(Point pnt, int rad)
    {
        mypnt = pnt;
        myrad = rad;
    }
    int GetRad() const {return myrad;}
    Point GetPoint() const {return mypnt;}
};

class Ring
{
private:
    Circle Inner;
    Circle Outer;
public:
    void Init(int x1, int y1, int rad1, int x2, int y2, int rad2)
    {   
        Point tempPoint;
        tempPoint.Init(x1,y1);
        
        Inner.Init(tempPoint, rad1);

        tempPoint.Init(x2,y2);
        
        Outer.Init(tempPoint, rad2);
    }
    void ShowRingInfo() const
    {
        cout<<"Inner Circle Info..."<<endl;
        cout<<"radius: "<<Inner.GetRad()<<endl;
        cout<<"["<<Inner.GetPoint().GetX()<<", "<<Inner.GetPoint().GetY()<<"]"<<endl;
        cout<<"Outer Circle Info..."<<endl;
        cout<<"radius: "<<Outer.GetRad()<<endl;
        cout<<"["<<Outer.GetPoint().GetX()<<", "<<Outer.GetPoint().GetY()<<"]"<<endl;
    }
};

int main()
{
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}