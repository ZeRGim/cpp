#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
    enum{CLERK = 1, SENIOR, ASSIST, MANAGER};

    void ShowPositionInfo(int pos)
    {
        switch (pos) {
        case CLERK:
            cout<<"CLERK"<<endl;
            break;
        case SENIOR:
            cout<<"SENIOR"<<endl;
            break;
        case ASSIST:
            cout<<"ASSIST"<<endl;
            break;
        case MANAGER:
            cout<<"MANAGER"<<endl;
            break;
        }
    }
}

class NameCard
{
private:
    char * name;
    char * comname;
    char * telenum;
    int position;
public:
    NameCard(char * myname, char * mycomname, char * mytelenum, int myposition)
    {
        int namelen = strlen(myname);
        int comnamelen = strlen(mycomname);
        int telelen = strlen(mytelenum);
        name = new char[namelen+1];
        comname = new char[comnamelen+1];
        telenum = new char[telelen+1];
        strcpy(name, myname);
        strcpy(comname,mycomname);
        strcpy(telenum, mytelenum);
        position = myposition;
    }
    void ShowNameCardInfo() const
    {
        cout<<"name: "<<name<<endl;
        cout<<"companyname: "<<comname<<endl;
        cout<<"phone: "<<telenum<<endl;
        cout<<"position: "; COMP_POS::ShowPositionInfo(position); cout<<endl;
    }
};

int main()
{
    NameCard manClerk("Lee","ABCEng","010-1111-2222", COMP_POS::CLERK);
    NameCard manSenior("Hong","OrangeEng","010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim","SoGoodEng","010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}