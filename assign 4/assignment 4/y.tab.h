/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO = 258,                    /* AUTO  */
    BREAK = 259,                   /* BREAK  */
    CASE = 260,                    /* CASE  */
    CHAR = 261,                    /* CHAR  */
    CONST = 262,                   /* CONST  */
    CONTINUE = 263,                /* CONTINUE  */
    DEFAULT = 264,                 /* DEFAULT  */
    DO = 265,                      /* DO  */
    DOUBLE = 266,                  /* DOUBLE  */
    ELSE = 267,                    /* ELSE  */
    ENUM = 268,                    /* ENUM  */
    EXTERN = 269,                  /* EXTERN  */
    FLOAT = 270,                   /* FLOAT  */
    FOR = 271,                     /* FOR  */
    GOTO = 272,                    /* GOTO  */
    IF = 273,                      /* IF  */
    INLINE = 274,                  /* INLINE  */
    INT = 275,                     /* INT  */
    LONG = 276,                    /* LONG  */
    REGISTER = 277,                /* REGISTER  */
    RESTRICT = 278,                /* RESTRICT  */
    RETURN = 279,                  /* RETURN  */
    SHORT = 280,                   /* SHORT  */
    SIGNED = 281,                  /* SIGNED  */
    SIZEOF = 282,                  /* SIZEOF  */
    STATIC = 283,                  /* STATIC  */
    STRUCT = 284,                  /* STRUCT  */
    SWITCH = 285,                  /* SWITCH  */
    TYPEDEF = 286,                 /* TYPEDEF  */
    UNION = 287,                   /* UNION  */
    UNSIGNED = 288,                /* UNSIGNED  */
    VOID = 289,                    /* VOID  */
    VOLATILE = 290,                /* VOLATILE  */
    WHILE = 291,                   /* WHILE  */
    BOOL = 292,                    /* BOOL  */
    COMPLEX = 293,                 /* COMPLEX  */
    IMAGINARY = 294,               /* IMAGINARY  */
    OPEN_SQUARE_BRACKET = 295,     /* OPEN_SQUARE_BRACKET  */
    CLOSE_SQUARE_BRACKET = 296,    /* CLOSE_SQUARE_BRACKET  */
    OPEN_PARENTHESIS = 297,        /* OPEN_PARENTHESIS  */
    CLOSE_PARENTHESIS = 298,       /* CLOSE_PARENTHESIS  */
    OPEN_CURLY_BRACKET = 299,      /* OPEN_CURLY_BRACKET  */
    CLOSE_CURLY_BRACKET = 300,     /* CLOSE_CURLY_BRACKET  */
    DOT = 301,                     /* DOT  */
    ARROW = 302,                   /* ARROW  */
    INCREMENT = 303,               /* INCREMENT  */
    DECREMENT = 304,               /* DECREMENT  */
    BITWISE_AND = 305,             /* BITWISE_AND  */
    MULTIPLY = 306,                /* MULTIPLY  */
    ADD = 307,                     /* ADD  */
    SUBTRACT = 308,                /* SUBTRACT  */
    BITWISE_NOR = 309,             /* BITWISE_NOR  */
    NOT = 310,                     /* NOT  */
    DIVIDE = 311,                  /* DIVIDE  */
    MODULO = 312,                  /* MODULO  */
    LEFT_SHIFT = 313,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 314,             /* RIGHT_SHIFT  */
    LESS_THAN = 315,               /* LESS_THAN  */
    GREATER_THAN = 316,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 317,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 318,      /* GREATER_THAN_EQUAL  */
    EQUAL = 319,                   /* EQUAL  */
    NOT_EQUAL = 320,               /* NOT_EQUAL  */
    BITWISE_XOR = 321,             /* BITWISE_XOR  */
    BITWISE_OR = 322,              /* BITWISE_OR  */
    LOGICAL_AND = 323,             /* LOGICAL_AND  */
    LOGICAL_OR = 324,              /* LOGICAL_OR  */
    QUESTION_MARK = 325,           /* QUESTION_MARK  */
    COLON = 326,                   /* COLON  */
    SEMICOLON = 327,               /* SEMICOLON  */
    ELLIPSIS = 328,                /* ELLIPSIS  */
    ASSIGN = 329,                  /* ASSIGN  */
    MULTIPLY_ASSIGN = 330,         /* MULTIPLY_ASSIGN  */
    DIVIDE_ASSIGN = 331,           /* DIVIDE_ASSIGN  */
    MODULO_ASSIGN = 332,           /* MODULO_ASSIGN  */
    ADD_ASSIGN = 333,              /* ADD_ASSIGN  */
    SUBTRACT_ASSIGN = 334,         /* SUBTRACT_ASSIGN  */
    LEFT_SHIFT_ASSIGN = 335,       /* LEFT_SHIFT_ASSIGN  */
    RIGHT_SHIFT_ASSIGN = 336,      /* RIGHT_SHIFT_ASSIGN  */
    AND_ASSIGN = 337,              /* AND_ASSIGN  */
    XOR_ASSIGN = 338,              /* XOR_ASSIGN  */
    OR_ASSIGN = 339,               /* OR_ASSIGN  */
    COMMA = 340,                   /* COMMA  */
    HASH = 341,                    /* HASH  */
    IDENTIFIER = 342,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 343,        /* INTEGER_CONSTANT  */
    FLOATING_CONSTANT = 344,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 345,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 346,          /* STRING_LITERAL  */
    PARENTHESIS_CLOSE = 347        /* PARENTHESIS_CLOSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define OPEN_SQUARE_BRACKET 295
#define CLOSE_SQUARE_BRACKET 296
#define OPEN_PARENTHESIS 297
#define CLOSE_PARENTHESIS 298
#define OPEN_CURLY_BRACKET 299
#define CLOSE_CURLY_BRACKET 300
#define DOT 301
#define ARROW 302
#define INCREMENT 303
#define DECREMENT 304
#define BITWISE_AND 305
#define MULTIPLY 306
#define ADD 307
#define SUBTRACT 308
#define BITWISE_NOR 309
#define NOT 310
#define DIVIDE 311
#define MODULO 312
#define LEFT_SHIFT 313
#define RIGHT_SHIFT 314
#define LESS_THAN 315
#define GREATER_THAN 316
#define LESS_THAN_EQUAL 317
#define GREATER_THAN_EQUAL 318
#define EQUAL 319
#define NOT_EQUAL 320
#define BITWISE_XOR 321
#define BITWISE_OR 322
#define LOGICAL_AND 323
#define LOGICAL_OR 324
#define QUESTION_MARK 325
#define COLON 326
#define SEMICOLON 327
#define ELLIPSIS 328
#define ASSIGN 329
#define MULTIPLY_ASSIGN 330
#define DIVIDE_ASSIGN 331
#define MODULO_ASSIGN 332
#define ADD_ASSIGN 333
#define SUBTRACT_ASSIGN 334
#define LEFT_SHIFT_ASSIGN 335
#define RIGHT_SHIFT_ASSIGN 336
#define AND_ASSIGN 337
#define XOR_ASSIGN 338
#define OR_ASSIGN 339
#define COMMA 340
#define HASH 341
#define IDENTIFIER 342
#define INTEGER_CONSTANT 343
#define FLOATING_CONSTANT 344
#define CHARACTER_CONSTANT 345
#define STRING_LITERAL 346
#define PARENTHESIS_CLOSE 347

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "asgn4_20CS10024_20CS30015.y"

    int intval;
    float floatval;
    char charval;
    char *strval;

#line 258 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
