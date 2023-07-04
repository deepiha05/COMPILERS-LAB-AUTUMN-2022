#include "myl.h"
#define INT_MAX __INT32_MAX__
#define INT_MIN (-INT_MAX - 1)

int main()
{
    printStr("Case : test printStr\n");
    char *str[3] = {"Welcome to compilers lab", "Next one is an empty string", ""};
    char *newline = "\n";
    for(int i=0; i<3; i++)
    {
        int ret = printStr(str[i]); 
        printStr(newline);
        printStr("Number of characters printed = ");
        printInt(ret);
        printStr(newline);
    }
    printStr(newline);

    printStr("Case : test printInt\n");
    int ints[9] = {0, 5, 10, 1000, -5, -10, -1000, INT_MAX, INT_MIN};
    for(int i=0; i<9; i++)
    {
        int ret = printInt(ints[i]);
        printStr(newline);
        printStr("Number of characters printed = ");
        printInt(ret);
        printStr(newline);
    }
    printStr(newline);

    printStr("Case : test printFlt\n");
    float floats[8] = {0.F, -12.34F, 12.34F, -2.F, 2.F, 0.1234F, -0.1234F, 0.001F};
    for(int i=0; i<8; i++)
    {
        int ret = printFlt(floats[i]);
        printStr(newline);
        printStr("Number of characters printed = ");
        printInt(ret);
        printStr(newline);
    }
    printStr(newline);

    printStr("Case : test readInt\n");
    int ntemp;
    int rep = 0;
    do 
    {
        printStr("Enter an integer: ");
        int ret = readInt(&ntemp);
        if(ret == ERR)
        {
            printStr("Invalid input. ");
        }
        else
        {
            printStr("The integer read: ");
            printInt(ntemp);
        }
        printStr("\nEnter 1 to continue otherwise enter 0: ");
        readInt(&rep);
    } while(rep != 0);
    printStr(newline);

    printStr("Case: test readFlt\n");
    float ftemp;
    rep = 0;
    do 
    {
        printStr("Enter a float: ");
        int ret = readFlt(&ftemp);
        if(ret == ERR)
        { 
            printStr("Invalid input. ");
        }
        else
        {
            printStr("The float read: ");
            printFlt(ftemp);
        }
        printStr("\nEnter 1 to continue otherwise enter 0: ");
        readInt(&rep);
    } while(rep != 0);
    printStr(newline);

    return 0;
}
