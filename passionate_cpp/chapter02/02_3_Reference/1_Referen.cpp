#include <iostream>
using namespace std;

int main(void)
{
    int num1=1020;
    int &num2 =num1; //할당되지 않은 변수앞에 &가 붙으면 이 이름은 참조자라는 것을 알려줌. 원래는 주소를 반환하라는 기호

    num2 = 3047;
    cout<<"VAL: "<<num1<<endl; // 참조자란 결국 별칭!!  참조자를 참조할 수도 있다
    cout<<"REF: "<<num2<<endl; // 참조자를 참조할 수도 있다 (근데 굳이 ?)
    
    cout<<"VAL: "<<&num1<<endl;
    cout<<"REF: "<<&num2<<endl;

    return 0;
}