#include <iostream>
#include <cstring>
#include "Printer.h"
using namespace std;

void Printer::SetString(const char *str)
{
    strcpy(Printer::mystr, str);
    return;
}

void Printer::ShowString(void)
{
    cout<<Printer::mystr<<endl;
    return;
}