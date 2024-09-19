#include <iostream>
#include <cstring>
#include <iterator>
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
    NameCard(const NameCard &copy)
    {
        name = new char[strlen(copy.name)+1];
        comname = new char[strlen(copy.comname)+1];
        telenum = new char[strlen(copy.telenum)+1];
        strcpy(name, copy.name);
        strcpy(comname, copy.comname);
        strcpy(telenum, copy.telenum);
        position = copy.position;
    }
    void ShowNameCardInfo() const
    {
        cout<<"name: "<<name<<endl;
        cout<<"companyname: "<<comname<<endl;
        cout<<"phone: "<<telenum<<endl;
        cout<<"position: "; COMP_POS::ShowPositionInfo(position); cout<<endl;
    }
    ~NameCard()
    {
        delete [] name;
        delete [] comname;
        delete [] telenum;

        cout<<"Destructor call"<<endl;
    }
};

int main()
{
    NameCard manClerk("Lee","ABCEng","010-1111-2222", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSenior("Hong","OrangeEng","010-3333-4444", COMP_POS::SENIOR);
    NameCard copy2 = manSenior;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
    return 0;
}