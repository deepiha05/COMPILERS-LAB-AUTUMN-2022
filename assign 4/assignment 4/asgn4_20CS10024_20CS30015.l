%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "y.tab.h"
%}

%x MULTILINE_COMMENT_BODY
%x COMMENT_BODY

/* KEYWORD "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"|"int"  */

IDENTIFIER_NONDIGIT   [a-zA-Z_]
IDENTIFIER_DIGIT [a-zA-Z0-9_]*
IDENTIFIER {IDENTIFIER_NONDIGIT}{IDENTIFIER_DIGIT}

DIGIT [0-9]
DIGIT_SEQUENCE {DIGIT}+
NONZERO_DIGIT [1-9]

INTEGER_CONSTANT {NONZERO_DIGIT}{DIGIT}*|"0"

EXPONENTIAL_PART [E]([+-]?){DIGIT_SEQUENCE}|[e]([+-]?){DIGIT_SEQUENCE}
FRACTIONAL_PART ({DIGIT_SEQUENCE}?)\.{DIGIT_SEQUENCE}|{DIGIT_SEQUENCE}\.
FLOATING_CONSTANT {FRACTIONAL_PART}({EXPONENTIAL_PART}?)|{DIGIT_SEQUENCE}{EXPONENTIAL_PART}

ENUMERATION_CONSTANT {IDENTIFIER}

ESCAPE_SEQUENCE       "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"

C_CHAR [^\'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE {C_CHAR}+
CHARACTER_CONSTANT \'({C_CHAR_SEQUENCE})\''

S_CHAR [^\"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE {S_CHAR}+
STRING_LITERAL \"({S_CHAR_SEQUENCE}?)\"

/* PUNCTUATOR       "["|"++"|"/"|"?"|"="|","|"]"|"("|"{"|"}"|"."|"->"|"*"|"+"|"-"|"~"|"!"|"%"|"<<"|">>"|"<"|">"|"<="|">="|":"|";"|"..."|"*="|"/="|"%="|"+="|"-="|"<<="|"#"|"--"|")"|"&"|"=="|"^"|"|"|"&&"|">>="|"!="|"&="|"^="|"||"|"|"   */

WS               [ \t\n]


/* rules and actions */

%%
"auto"                          { return AUTO; }
"break"                         { return BREAK; }
"case"                          { return CASE; }
"char"                          { return CHAR; }
"const"                         { return CONST; }
"continue"                      { return CONTINUE; }
"default"                       { return DEFAULT; }
"do"                            { return DO; }
"double"                        { return DOUBLE; }
"else"                          { return ELSE; }
"enum"                          { return ENUM; }             
"extern"                        { return EXTERN; }
"float"                         { return FLOAT; }
"for"                           { return FOR; }
"goto"                          { return GOTO; }
"if"                            { return IF; }
"inline"                        { return INLINE; }
"int"                           { return INT; }
"long"                          { return LONG; }
"register"                      { return REGISTER; }
"restrict"                      { return RESTRICT; }
"return"                        { return RETURN; }
"short"                         { return SHORT; }
"signed"                        { return SIGNED; }
"sizeof"                        { return SIZEOF; }
"static"                        { return STATIC; }
"struct"                        { return STRUCT; }
"switch"                        { return SWITCH; }
"typedef"                       { return TYPEDEF; }
"union"                         { return UNION; }
"unsigned"                      { return UNSIGNED; }
"void"                          { return VOID; }
"volatile"                      { return VOLATILE; }
"while"                         { return WHILE; }
"_Bool"                         { return BOOL; }
"_Complex"                      { return COMPLEX; }
"_Imaginary"                    { return IMAGINARY; }

{IDENTIFIER} {return IDENTIFIER; }
{INTEGER_CONSTANT} {return INTEGER_CONSTANT;}
{FLOATING_CONSTANT} {return FLOATING_CONSTANT;}
{CHARACTER_CONSTANT} {return CHARACTER_CONSTANT;}
{STRING_LITERAL} {return STRING_LITERAL;}
{WS} { }

"/*"                            { BEGIN(MULTILINE_COMMENT_BODY); }
<MULTILINE_COMMENT_BODY>"*/"   { BEGIN(INITIAL); }
<MULTILINE_COMMENT_BODY>.      { }
<MULTILINE_COMMENT_BODY>"\n"   { }

"//"                            { BEGIN(COMMENT_BODY); }
<COMMENT_BODY>"\n"  { BEGIN(INITIAL); }
<COMMENT_BODY>.     { }

"["                             { return OPEN_SQUARE_BRACKET; }
"]"                             { return CLOSE_SQUARE_BRACKET; }
"("                             { return OPEN_PARENTHESIS; }
")"                             { return CLOSE_PARENTHESIS; }
"{"                             { return OPEN_CURLY_BRACKET; }
"}"                             { return CLOSE_CURLY_BRACKET; }
"."                             { return DOT; }
"->"                            { return ARROW; }
"++"                            { return INCREMENT; }
"--"                            { return DECREMENT; }
"&"                             { return BITWISE_AND; }
"*"                             { return MULTIPLY; }
"+"                             { return ADD; }
"-"                             { return SUBTRACT; }
"~"                             { return BITWISE_NOR; }
"!"                             { return NOT; }
"/"                             { return DIVIDE; }
"%"                             { return MODULO; }
"<<"                            { return LEFT_SHIFT; }
">>"                            { return RIGHT_SHIFT; }
"<"                             { return LESS_THAN; }
">"                             { return GREATER_THAN; }
"<="                            { return LESS_THAN_EQUAL; }
">="                            { return GREATER_THAN_EQUAL; }
"=="                            { return EQUAL; }
"!="                            { return NOT_EQUAL; }
"^"                             { return BITWISE_XOR; }
"|"                             { return BITWISE_OR; }
"&&"                            { return LOGICAL_AND; }
"||"                            { return LOGICAL_OR; }
"?"                             { return QUESTION_MARK; }
":"                             { return COLON; }
";"                             { return SEMICOLON; }
"..."                           { return ELLIPSIS; }
"="                             { return ASSIGN; }
"*="                            { return MULTIPLY_ASSIGN; }
"/="                            { return DIVIDE_ASSIGN; }
"%="                            { return MODULO_ASSIGN; }
"+="                            { return ADD_ASSIGN; }
"-="                            { return SUBTRACT_ASSIGN; }
"<<="                           { return LEFT_SHIFT_ASSIGN; }
">>="                           { return RIGHT_SHIFT_ASSIGN; }
"&="                            { return AND_ASSIGN; }
"^="                            { return XOR_ASSIGN; }
"|="                            { return OR_ASSIGN; }
","                             { return COMMA; }
"#"                             { return HASH; }
%%