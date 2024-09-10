#include <iostream>
using namespace std;

class FruitSeller
{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    FruitSeller(int price, int num, int money)
        : APPLE_PRICE(price), numOfApples(num), myMoney(money) // 이니셜라이저를 이용하면 const 멤버변수도 만들 수 있다.
    {
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
    FruitBuyer(int money)
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
    FruitSeller seller(1000,20,0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"과일구매자 현황"<<endl;
    buyer.ShowBuyResult();
    cout<<"과일판매자 현황"<<endl;
    seller.ShowSalesResult();
    return 0;
}

