%{
#define KEYWORD 1
#define IDENTIFIER 2
#define INTEGER_CONSTANT 3
#define FLOATING_CONSTANT 4
#define CHARACTER_CONSTANT 5
#define STRING_LITERAL 6
#define PUNCTUATOR 7
#define COMMENT 8
#define MULTILINE_COMMENT 9
#define INVALID 10

%}

%x MULTILINE_COMMENT_BODY
%x COMMENT_BODY

KEYWORD "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"|"int"

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

PUNCTUATOR       "["|"++"|"/"|"?"|"="|","|"]"|"("|"{"|"}"|"."|"->"|"*"|"+"|"-"|"~"|"!"|"%"|"<<"|">>"|"<"|">"|"<="|">="|":"|";"|"..."|"*="|"/="|"%="|"+="|"-="|"<<="|"#"|"--"|")"|"&"|"=="|"^"|"|"|"&&"|">>="|"!="|"&="|"^="|"||"|"|"

WS               [ \t\n]



%%

{KEYWORD} {return KEYWORD; }
{IDENTIFIER} {return IDENTIFIER; }
{INTEGER_CONSTANT} {return INTEGER_CONSTANT;}
{FLOATING_CONSTANT} {return FLOATING_CONSTANT;}
{CHARACTER_CONSTANT} {return CHARACTER_CONSTANT;}
{STRING_LITERAL} {return STRING_LITERAL;}
{PUNCTUATOR}    {return PUNCTUATOR;}
"/*"                            { BEGIN(MULTILINE_COMMENT_BODY); }
<MULTILINE_COMMENT_BODY>"*/"   { BEGIN(INITIAL); return MULTILINE_COMMENT; }
<MULTILINE_COMMENT_BODY>.      { }
<MULTILINE_COMMENT_BODY>"\n"   { }

"//"                            { BEGIN(COMMENT_BODY); }
<COMMENT_BODY>"\n"  { BEGIN(INITIAL); return COMMENT; }
<COMMENT_BODY>.     { }
{WS} { }
. {return INVALID;}


%%