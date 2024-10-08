#include <iostream>
using namespace std;

struct Point
{
    int xpos;
    int ypos;
    void MovePos(int x, int y)
    {
        xpos += x;
        ypos += y;
        return;
    }

    void AddPoint(const Point &pos)
    {
        xpos += pos.xpos;
        ypos += pos.ypos;
        return;
    }

    void ShowPosition(void)
    {
        cout<<xpos<<endl;
        cout<<ypos<<endl;
        return;
    }
};

int main(void)
{
    Point pos1 = {12,4};
    Point pos2 = {20,30};

    pos1.MovePos(-7,10);
    pos1.ShowPosition();

    pos1.AddPoint(pos2);
    pos1.ShowPosition();
    return 0;
}