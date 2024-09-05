#include <iostream>
using namespace std;

namespace AAA   
{
    namespace BBB
    {
        namespace CCC
        {
            int num1;
            int num2;
        } // namespace CCC
        
    } // namespace BBB
    
} // namespace AAA  

int main(void)
{
    AAA::BBB::CCC::num1=20;
    AAA::BBB::CCC::num2=30; // 하위에 접근할때 이렇게 접근하면 귀찮고 힘듦

    namespace ABC=AAA::BBB::CCC; // 별칭 선언으로 편하게 가자.
    cout<<ABC::num1<<endl;
    cout<<ABC::num2<<endl;
}