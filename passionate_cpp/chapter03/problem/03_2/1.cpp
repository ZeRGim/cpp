#include <iostream>
using namespace std;

class Calculator
{
private:
    int add_cnt;
    int min_cnt;
    int div_cnt;
    int times_cnt;
public:
    void Init();
    void ShowOpCount(void);
    double Add(const double &num1, const double &num2);
    double Min(const double &num1, const double &num2);
    double Div(const double &num1, const double &num2);
    double Times(const double &num1, const double &num2);
};
void Calculator::Init(void)
{
    add_cnt = 0;
    min_cnt = 0;
    div_cnt = 0;
    times_cnt = 0;
}
void Calculator::ShowOpCount(void)
{
    cout << "Add: " << add_cnt << " Subtract: " << min_cnt;
    cout << " Divide: " << div_cnt << " Multiply: " << times_cnt << endl;
}

double Calculator::Add(const double &num1, const double &num2)
{   
    add_cnt += 1;
    return num1 + num2;
}
double Calculator::Min(const double &num1, const double &num2)
{
    min_cnt += 1;
    return num1 - num2;
}
double Calculator::Div(const double &num1, const double &num2)
{
    div_cnt += 1;
    return num1 / num2;
}
double Calculator::Times(const double &num1, const double &num2)
{
    times_cnt += 1;
    return num1 * num2;
}

int main(void)
{
    Calculator cal;
    cal.Init();
    cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.2 + 2.4 = "<<cal.Div(3.2, 2.4)<<endl;
    cout<<"3.2 + 2.4 = "<<cal.Min(3.2, 2.4)<<endl;
    cout<<"3.2 + 2.4 = "<<cal.Div(3.2, 2.4)<<endl;
    cal.ShowOpCount();
    return 0;
}