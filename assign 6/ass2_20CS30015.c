#include "myl.h"
#define BUFF 100
#define INT_MAX __INT32_MAX__
#define INT_MIN (-INT_MAX - 1)

// Function to print a string and return the length of the string printed
int printStr(char *str)
{
    int len;

    for(len=0;str[len] != '\0';len++);

    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(len)
    );
    return len;
}


// Function to read an integer from STDIN
int readInt(int *n) 
{
    char buff[BUFF];
    int bytes;

    __asm__ __volatile__ (
        "movl $0, %%eax \n\t" 
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(bytes)
        :"S"(buff), "d"(BUFF));

    if(bytes < 0)
        return ERR;
    
    int sign = 1, index = 0;
    long num = 0;

    if(index < bytes) 
    {
        if(buff[index] == '-') 
        {
            sign = -1;
            index++;
        } 
        else if(buff[index] == '+') 
        {
            index++;
        }
    }
    
    while(index < bytes && buff[index] != '\n') 
    {
        if(buff[index] < '0' || buff[index] > '9')
        {
            return ERR;
        }
        int curr = (int)(buff[index] - '0');
        num = num * 10;
        num = num + (sign * curr);
        if(num > INT_MAX || num < INT_MIN)
        {
            return ERR;
        }
        index++;
    }

    *n = (int)num;
    return OK;
}


int printInt(int n) {
    char buff[BUFF];
    int bytes = 0;
    long nl = n;
    if (nl < 0) 
    {
        buff[bytes++] = '-';
        nl = -nl;
    }
    while (nl) 
    {
        buff[bytes++] = (char)('0' + (nl % 10));
        nl = nl / 10;
    }
    if (bytes == 0)
    {
        buff[bytes++] = '0';
    }

    int front = (buff[0] == '-' ? 1 : 0);
    int back = bytes - 1;
    while (front < back) 
    {
        char temp = buff[front];
        buff[front++] = buff[back];
        buff[back--] = temp;
    }

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(buff), "d"(bytes));
    return bytes;
}


