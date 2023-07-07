#include <stdio.h>

extern int yylex();

int main()
{
int ntoken;
while(ntoken = yylex())
{
        if(ntoken == KEYWORD)
            printf("<KEYWORD, %s>\n", yytext);
        else if(ntoken == IDENTIFIER)
            printf("<IDENTIFIER, %s>\n", yytext);
        else if(ntoken == INTEGER_CONSTANT)
            printf("<INTEGER_CONSTANT, %s>\n", yytext);
        else if(ntoken == FLOATING_CONSTANT)
            printf("<FLOAT_CONSTANT, %s>\n", yytext);
        else if(ntoken == CHARACTER_CONSTANT)
            printf("<CHARACTER_CONSTANT, %s>\n", yytext);
        else if(ntoken == STRING_LITERAL)
            printf("<STRING_LITERAL, %s>\n", yytext);
        else if(ntoken == PUNCTUATOR)
            printf("<PUNCTUATOR, %s>\n", yytext);
        else if(ntoken==COMMENT)
            printf("<COMMENT>\n");
        else if (ntoken==MULTILINE_COMMENT)
            printf("<MULTILINE_COMMENT>\n");
        else
            printf("<INVALID_TOKEN, %s>\n", yytext);        
    }
    return 0;
}

int yywrap()
{
return 1;
}