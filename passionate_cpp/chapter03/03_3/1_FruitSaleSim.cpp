#include <iostream>
using namespace std;

class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    void Init(int price, int num, int money)
    {
        APPLE_PRICE=price;
        numOfApples=num;
        myMoney=money;
    }
    int SalesApple(int money)
    {
        int num = money /APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }
    void ShowSalesResult()
    {
        cout<<"남은 사과: "<<numOfApples<<endl;
        cout<<"돈: "<<myMoney<<endl;
    }
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;
public:
    void Init(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }
    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples+=seller.SalesApple(money);
        myMoney -= money;
    }
    void ShowBuyResult()
    {
        cout<<"산 사과: "<<numOfApples<<endl;
        cout<<"돈: "<<myMoney<<endl;
    }
};

int main()
{
    FruitSeller seller;
    seller.Init(1000,20,0);
    FruitBuyer buyer;
    buyer.Init(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"과일구매자 현황"<<endl;
    buyer.ShowBuyResult();
    cout<<"과일판매자 현황"<<endl;
    seller.ShowSalesResult();
    return 0;
}

