#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char * name;
    int age;
public:
    Person(char * myname, int myage)
    {
        name = new char[strlen(myname)+1];
        strcpy(name, myname);
        age=myage;
    }
    Person(const Person &copy)
    {
        name = new char[strlen(copy.name)+1];
        strcpy(name, copy.name);
        age=copy.age;
    }
    void ShowPersonInfo() const
    {
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
    ~Person()
    {
        delete []name;
        cout<<"Called des"<<endl;
    }
};

int main(void)
{
    Person man1("Lee Dong Woo", 29);
    Person man2 = man1;
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}