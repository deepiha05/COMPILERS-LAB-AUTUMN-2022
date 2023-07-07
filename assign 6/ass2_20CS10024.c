#include "myl.h"

#define BUFF 20
#define AFTERDECIMAL 6
#define INT_MAX __INT32_MAX__
#define INT_MIN (-INT_MAX - 1)




// Function to print a string (character array), and return the number of characters printed
int printStr(char *str)
{
    int bytes = 0;
    while(str[bytes]!='\0'){
        bytes++;
    }

    __asm__ __volatile__ 
    (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(bytes)
    );
    return bytes;
}


// Function to read an integer from STDIN
int readInt(int *n) {
    char buff[BUFF];
    int bytes;

    __asm__ __volatile__ 
    (
        "movl $0, %%eax \n\t" 
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(bytes)
        :"S"(buff), "d"(BUFF)
    );

    if(bytes < 0){
        return ERR;
    }
    
    int sign = 1, index = 0;
    long number = 0;
    if(index < bytes) {
        if(buff[index] == '-') {
            sign = -1;
            index++;
        } 
        else if(buff[index] == '+') {
            index++;
        }
    }
    
    while(index < bytes && buff[index] != '\n') {
        if(buff[index] < '0' || buff[index] > '9'){
            return ERR;
        }
        int curr = (int)(buff[index] - '0');
        number *= 10;
        number += (sign * curr);
        if(number> INT_MAX || number < INT_MIN){
            return ERR;
        }
        index++;
    }

    *n = (int)number;
    return OK;
}



// Function to print an integer, and return the number of characters printed
int printInt(int n) {
    char out[BUFF];
    int bytes = 0;
    long nl = n;
    if (nl < 0) {
        out[bytes++] = '-';
        nl = -nl;
    }
    while (nl) {
        out[bytes++] = (char)('0' + (nl % 10));
        nl /= 10;
    }
    if (bytes == 0)
        out[bytes++] = '0';

    int front = (out[0] == '-' ? 1 : 0);
    int back = bytes - 1;
    while (front < back) {
        char temp = out[front];
        out[front++] = out[back];
        out[back--] = temp;
    }

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(out), "d"(bytes));
    return bytes;
}


// Function to read a float from STDIN
int readFlt(float *f){
    char buff[BUFF];
    int bytes;

    __asm__ __volatile__ 
    (
        "movl $0, %%eax \n\t" 
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(bytes)
        :"S"(buff), "d"(BUFF)
    );

    if(bytes < 0)
    {
        return ERR;
    }
    
    int sign = 1, index = 0, multiplier = 0, msign = 1;
    float number = 0;
    if(index < bytes) {
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
    
    while(index < bytes && buff[index] != '\n' && buff[index] != '.' && buff[index] != 'E' && buff[index] != 'e') {
        if(buff[index] < '0' || buff[index] > '9')
        {
            return ERR;
        }
        int curr = (int)(buff[index] - '0');
        number *= 10;
        number += curr;
        index++;
    }

    if(index < bytes && buff[index] == '.') {
        index++;
        float shift = 10.F;
        while(index < bytes && buff[index] != '\n' && buff[index] != 'E' && buff[index] != 'e') {
            if(buff[index] < '0' || buff[index] > '9')
            {
                return ERR;
            }
            float curr = (float)(buff[index] - '0');
            curr /= shift;
            number += curr;
            shift *= 10;
            index++;
        }
    }

    if(index < bytes && (buff[index] == 'E' || buff[index] == 'e')) {
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
            multiplier *= 10;
            multiplier += curr;
            index++;
        }
    }


    for(int i = 0; i < multiplier; i++) 
    {
        if(msign == 1) 
        {
            number *= 10;
        } 
        else 
        {
            number /= 10;
        }
    }
    *f = sign * number;
    return OK;
}

int printFlt(float f) {
    char buff[BUFF];
    int bytes = 0;
    if (f < 0) {
        buff[bytes++] = '-';
        f = -f;
    }

    int integral_part = (int)f;
    f -= integral_part;
    int x=integral_part; 

    while (integral_part) {
        buff[bytes++] = (char)('0' + (integral_part % 10));
        integral_part /= 10;
    }
    if (bytes == 0 || buff[bytes - 1] == '-')
        buff[bytes++] = '0';

    int front = (buff[0] == '-' ? 1 : 0);
    int back = bytes - 1;
    while (front < back) {
        char temp = buff[front];
        buff[front++] = buff[back];
        buff[back--] = temp;
    }

    buff[bytes++] = '.';

    for (int i = 0; i < AFTERDECIMAL; i++)
        f *= 10;

    int fractional_part = (int)f;
    int y=fractional_part ;
    front = bytes;

    for (int i = 0; i < AFTERDECIMAL; i++) {
        buff[bytes++] = (char)('0' + (fractional_part % 10));
        fractional_part /= 10;
    }
    if(y==0)
    {
        if(buff[0]=='-') printStr("-");
        printInt(x);
        printStr(".");
        printStr("000000");
        return ERR;
    }
    back = bytes - 1;
    while (front < back) {
        char temp = buff[front];
        buff[front++] = buff[back];
        buff[back--] = temp;
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