#ifndef PRINTER_H
#define PRINTER_H

class Printer{
private:
    char mystr[30];
public:
    void SetString(const char *str);
    void ShowString(void);
};


#endif