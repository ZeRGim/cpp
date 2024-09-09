#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char str1[30] = "slacks";
    char str2[30];
    cout<<strlen(str1)<<endl;
    strcat(str1, "sdasd");
    strcpy(str2, str1);
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<strcmp(str1, str2);
    return 0;
}