#include <cmath>
#include <cstdio>
#include <cstring> //.h를 빼고 앞에 c를 붙이면 똑같은 라이브러리 사용가능
using namespace std; //이런 라이브러리도 std::아래 있다.

int main(void)
{
    char str1[]="Result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s: %f \n",str1,sin(0.14));
    printf("%s: %f \n",str2,abs(-1.25));
    return 0;

}