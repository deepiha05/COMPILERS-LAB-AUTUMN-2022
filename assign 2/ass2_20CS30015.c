#include "myl.h"
#define BUFF 100
#define AFTERDECIMAL 6
#define INT_MAX __INT32_MAX__
#define INT_MIN (-INT_MAX - 1)

// Function to print a string and return the bytesgth of the string printed
int printStr(char *str)
{
    int bytes;

    for(bytes=0;str[bytes] != '\0';bytes++);

    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(bytes)
    );
    return bytes;
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

    int j = (buff[0] == '-' ? 1 : 0);
    int k = bytes - 1;
    while (j < k) 
    {
        char temp = buff[j];
        buff[j++] = buff[k];
        buff[k--] = temp;
    }

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(buff), "d"(bytes));
    return bytes;
}


// Function to read a float from STDIN
int readFlt(float *f)
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
    {
        return ERR;
    }
    
    int sign = 1, index = 0, multiplier = 0, msign = 1;
    float num = 0;
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
    
    while(index < bytes && buff[index] != '\n' && buff[index] != '.' && buff[index] != 'E' && buff[index] != 'e') 
    {
        if(buff[index] < '0' || buff[index] > '9')
        {
            return ERR;
        }
        int curr = (int)(buff[index] - '0');
        num = num * 10;
        num = num + curr;
        index++;
    }

    if(index < bytes && buff[index] == '.') 
    {
        index++;
        float shift = 10.F;
        while(index < bytes && buff[index] != '\n' && buff[index] != 'E' && buff[index] != 'e') 
        {
            if(buff[index] < '0' || buff[index] > '9')
            {
                return ERR;
            }
            float curr = (float)(buff[index] - '0');
            curr = curr / shift;
            num = num + curr;
            shift = shift * 10;
            index++;
        }
    }

    if(index < bytes && (buff[index] == 'E' || buff[index] == 'e')) 
    {
        index++;
        if(index < bytes) 
        {
            if(buff[index] == '-') 
            {
                msign = -1;
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
            multiplier = multiplier * 10;
            multiplier = multiplier + curr;
            index++;
        }
    }


    for(int i = 0; i < multiplier; i++) 
    {
        if(msign == 1) 
        {
            num = num * 10;
        } 
        else 
        {
            num = num / 10;
        }
    }
    *f = sign * num;
    return OK;
}

int printFlt(float f) {
    char buff[BUFF];
    int bytes = 0;
    if (f < 0) 
    {
        buff[bytes++] = '-';
        f = -f;
    }

    int integer_part = (int)f;
    f -= integer_part;
    int dec = integer_part;

    while (integer_part) 
    {
        buff[bytes++] = (char)('0' + (integer_part % 10));
        integer_part /= 10;
    }
    
    if (bytes == 0 || buff[bytes - 1] == '-')
    {
        buff[bytes++] = '0';
    }

    int j = (buff[0] == '-' ? 1 : 0);
    int k = bytes - 1;
    while (j < k) 
    {
        char temp = buff[j];
        buff[j++] = buff[k];
        buff[k--] = temp;
    }

    buff[bytes++] = '.';

    for (int i = 0; i < AFTERDECIMAL; i++)
        f *= 10;

    int fractional_part = (int)f;
    int frac = fractional_part;
    j = bytes;

    for (int i = 0; i < AFTERDECIMAL; i++) 
    {
        buff[bytes++] = (char)('0' + (fractional_part % 10));
        fractional_part /= 10;
    }
    if(frac==0)
    {
        if(buff[0]=='-') printStr("-");
        printInt(dec);
        printStr(".");
        printStr("000000");
        return ERR;
    }

    k = bytes - 1;
    while (j < k) 
    {
        char temp = buff[j];
        buff[j++] = buff[k];
        buff[k--] = temp;
    }

    while(buff[bytes-1] == '0')
        bytes--;

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(buff), "d"(bytes));
    
    return bytes;
}