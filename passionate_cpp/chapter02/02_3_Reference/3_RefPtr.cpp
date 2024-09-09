#include <iostream>
using namespace std;

int main(void)
{
    int num=12;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr; //포인터도 결국에 변수이기 때문에 참조자를 만들 수 있다.
    int **(&dpref) = dptr; //이중포인터도

    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;
    return 0;
}