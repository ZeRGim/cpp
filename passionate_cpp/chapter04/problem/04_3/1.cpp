#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x, int y) : xpos(x), ypos(y)
    {
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
    Circle(int x, int y, int rad) : mypnt(x, y), myrad(rad)
    {
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
    Ring(int x1, int y1, int rad1, int x2, int y2, int rad2) : Inner(x1, y1, rad1), Outer(x2, y2, rad2)
    {   
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
    Ring ring(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}