#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN=20;
const int MAX_COUSTOMER = 100;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);
enum {
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

class Account
{
private:
    int accID, balance;
    char * cusName;
public:
    Account(int accID, char * cusName): accID(accID)
    {
        balance = 0;
        int len = strlen(cusName)+1;
        this->cusName = new char[len];
        strcpy(this->cusName, cusName);
    }
    ~Account(){
        delete []cusName;
    }
    int GetAccId()
    {
        return this->accID;
    }
    int GetBalance() {return this->balance;}
    char * GetName() {return this->cusName;}
    void Deposit(int money)
    {
        this->balance += money;
    }
    void Withdraw(int money)
    {
        this->balance -= money;
    }
};
int customer_num = 0;
Account * accArr[MAX_COUSTOMER];

int main(void)
{
    int choice;

    while (true)
    {
        ShowMenu();
        cout<<"선택: ";
        cin>>choice;
        cout<<endl;

        switch (choice)
        {
        case MAKE:
            MakeAccount();
            break;
        case DEPOSIT:
            DepositMoney();
            break;
        case WITHDRAW:
            WithdrawMoney();
            break;
        case INQUIRE:
            ShowAllAccInfo();
            break;
        case EXIT:
            return 0;
        default:
            cout<<"잘못된 번호선택"<<endl;
        }
    }
    return 0;
}

void ShowMenu(void)
{
    cout<<"-----Menu-----"<<endl;
    cout<<"1. 계좌개설"<<endl;
    cout<<"2. 입 금"<<endl;
    cout<<"3. 출 금"<<endl;
    cout<<"4. 계좌정보 전체 출력"<<endl;
    cout<<"5. 프로그램 종료"<<endl;
}

void MakeAccount(void)
{
    int id;
    char name[NAME_LEN];

    cout<<"[계좌 개설]"<<endl;
    cout<<"계좌 ID: "; cin>>id;
    cout<<"이름: "; cin>>name;
    cout<<endl;

    accArr[customer_num] = new Account(id, name);
    customer_num++;
}

void DepositMoney(void)
{
    int money;
    int id;
    bool find = false;
    int accIdx;
    cout<<"[입  금]"<<endl;
    cout<<"계좌 ID: "; cin>>id;
    for(int i=0; i<customer_num; i++)
    {
        if(accArr[i]->GetAccId()==id)
        {
            find = true;
            accIdx = i;
            break;
        }
    }
    if(find){
        cout<<"입금액: "; cin>>money;
        accArr[accIdx]->Deposit(money);
        return;
    }
    else    cout<<"유효하지 않은 ID입니다."<<endl<<endl;
}

void WithdrawMoney(void)
{
    int money;
    int id, idx;
    bool find = false;
    cout<<"[출  금]"<<endl;
    cout<<"계좌 ID: "; cin>>id;

    for(int i=0; i<customer_num; i++)
    {
        if(accArr[i]->GetAccId()==id)
        {
            find = true;
            idx = i;
            break;
        }
    }
    if(find){
        cout<<"출금액: "; cin>>money;
        if(accArr[idx]->GetBalance()<money)
        {
            cout<<"잔액부족"<<endl;
            return;
        }
        accArr[idx]->Withdraw(money);
        cout<<money<<"원 출금완료"<<endl<<endl;
        return;
    }
    else cout<<"유효X ID"<<endl<<endl;
}

void ShowAllAccInfo(void)
{
    for(int i = 0; i<customer_num; i++)
    {
        cout<<"계좌 ID: "<<accArr[i]->GetAccId()<<endl;
        cout<<"이 름: "<<accArr[i]->GetName()<<endl;
        cout<<"잔 액: "<<accArr[i]->GetBalance()<<endl;
    }
}