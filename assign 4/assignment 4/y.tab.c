/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "asgn4_20CS10024_20CS30015.y"

    #include <stdio.h>
    extern int yylex();
    void yyerror(char *s);
    extern char* yytext;
    extern int yylineno;

#line 79 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 323 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_CASE = 5,                       /* CASE  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ENUM = 13,                      /* ENUM  */
  YYSYMBOL_EXTERN = 14,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 15,                     /* FLOAT  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_GOTO = 17,                      /* GOTO  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_INLINE = 19,                    /* INLINE  */
  YYSYMBOL_INT = 20,                       /* INT  */
  YYSYMBOL_LONG = 21,                      /* LONG  */
  YYSYMBOL_REGISTER = 22,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 23,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_SHORT = 25,                     /* SHORT  */
  YYSYMBOL_SIGNED = 26,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 27,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 28,                    /* STATIC  */
  YYSYMBOL_STRUCT = 29,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 30,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 31,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 32,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 33,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 34,                      /* VOID  */
  YYSYMBOL_VOLATILE = 35,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_BOOL = 37,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 38,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 39,                 /* IMAGINARY  */
  YYSYMBOL_OPEN_SQUARE_BRACKET = 40,       /* OPEN_SQUARE_BRACKET  */
  YYSYMBOL_CLOSE_SQUARE_BRACKET = 41,      /* CLOSE_SQUARE_BRACKET  */
  YYSYMBOL_OPEN_PARENTHESIS = 42,          /* OPEN_PARENTHESIS  */
  YYSYMBOL_CLOSE_PARENTHESIS = 43,         /* CLOSE_PARENTHESIS  */
  YYSYMBOL_OPEN_CURLY_BRACKET = 44,        /* OPEN_CURLY_BRACKET  */
  YYSYMBOL_CLOSE_CURLY_BRACKET = 45,       /* CLOSE_CURLY_BRACKET  */
  YYSYMBOL_DOT = 46,                       /* DOT  */
  YYSYMBOL_ARROW = 47,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 48,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 49,                 /* DECREMENT  */
  YYSYMBOL_BITWISE_AND = 50,               /* BITWISE_AND  */
  YYSYMBOL_MULTIPLY = 51,                  /* MULTIPLY  */
  YYSYMBOL_ADD = 52,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 53,                  /* SUBTRACT  */
  YYSYMBOL_BITWISE_NOR = 54,               /* BITWISE_NOR  */
  YYSYMBOL_NOT = 55,                       /* NOT  */
  YYSYMBOL_DIVIDE = 56,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 57,                    /* MODULO  */
  YYSYMBOL_LEFT_SHIFT = 58,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 59,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 60,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 61,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 62,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 63,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 64,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 65,                 /* NOT_EQUAL  */
  YYSYMBOL_BITWISE_XOR = 66,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 67,                /* BITWISE_OR  */
  YYSYMBOL_LOGICAL_AND = 68,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 69,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 70,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 71,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 72,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 73,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGN = 74,                    /* ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 75,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVIDE_ASSIGN = 76,             /* DIVIDE_ASSIGN  */
  YYSYMBOL_MODULO_ASSIGN = 77,             /* MODULO_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 78,                /* ADD_ASSIGN  */
  YYSYMBOL_SUBTRACT_ASSIGN = 79,           /* SUBTRACT_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 80,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 81,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 82,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 83,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 84,                 /* OR_ASSIGN  */
  YYSYMBOL_COMMA = 85,                     /* COMMA  */
  YYSYMBOL_HASH = 86,                      /* HASH  */
  YYSYMBOL_IDENTIFIER = 87,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 88,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 89,         /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 90,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 91,            /* STRING_LITERAL  */
  YYSYMBOL_PARENTHESIS_CLOSE = 92,         /* PARENTHESIS_CLOSE  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_primary_expression = 94,        /* primary_expression  */
  YYSYMBOL_constant = 95,                  /* constant  */
  YYSYMBOL_postfix_expression = 96,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 97, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 98,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 99,          /* unary_expression  */
  YYSYMBOL_unary_operator = 100,           /* unary_operator  */
  YYSYMBOL_cast_expression = 101,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 102, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 103,      /* additive_expression  */
  YYSYMBOL_shift_expression = 104,         /* shift_expression  */
  YYSYMBOL_relational_expression = 105,    /* relational_expression  */
  YYSYMBOL_equality_expression = 106,      /* equality_expression  */
  YYSYMBOL_and_expression = 107,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 108,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 109,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 110,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 111,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 112,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 113,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 114,      /* assignment_operator  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_constant_expression = 116,      /* constant_expression  */
  YYSYMBOL_declaration = 117,              /* declaration  */
  YYSYMBOL_init_declarator_list_opt = 118, /* init_declarator_list_opt  */
  YYSYMBOL_declaration_specifiers = 119,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 120, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 121,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 122,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 123,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 124,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 125, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 126, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 127,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 128,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 129,          /* enumerator_list  */
  YYSYMBOL_enumerator = 130,               /* enumerator  */
  YYSYMBOL_type_qualifier = 131,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 132,       /* function_specifier  */
  YYSYMBOL_declarator = 133,               /* declarator  */
  YYSYMBOL_pointer_opt = 134,              /* pointer_opt  */
  YYSYMBOL_direct_declarator = 135,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 136,  /* type_qualifier_list_opt  */
  YYSYMBOL_assignment_expression_opt = 137, /* assignment_expression_opt  */
  YYSYMBOL_identifier_list_opt = 138,      /* identifier_list_opt  */
  YYSYMBOL_pointer = 139,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 140,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 141,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 142,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 143,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 144,          /* identifier_list  */
  YYSYMBOL_type_name = 145,                /* type_name  */
  YYSYMBOL_initializer = 146,              /* initializer  */
  YYSYMBOL_initializer_list = 147,         /* initializer_list  */
  YYSYMBOL_designation_opt = 148,          /* designation_opt  */
  YYSYMBOL_designation = 149,              /* designation  */
  YYSYMBOL_designator_list = 150,          /* designator_list  */
  YYSYMBOL_designator = 151,               /* designator  */
  YYSYMBOL_statement = 152,                /* statement  */
  YYSYMBOL_labeled_statement = 153,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 154,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 155,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 156,          /* block_item_list  */
  YYSYMBOL_block_item = 157,               /* block_item  */
  YYSYMBOL_expression_statement = 158,     /* expression_statement  */
  YYSYMBOL_expression_opt = 159,           /* expression_opt  */
  YYSYMBOL_selection_statement = 160,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 161,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 162,           /* jump_statement  */
  YYSYMBOL_translation_unit = 163,         /* translation_unit  */
  YYSYMBOL_external_declaration = 164,     /* external_declaration  */
  YYSYMBOL_function_definition = 165,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 166,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 167          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   934

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  339

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    37,    37,    39,    41,    43,    47,    49,    51,    55,
      57,    59,    61,    63,    65,    67,    69,    71,    75,    78,
      81,    83,    87,    89,    91,    93,    95,    97,   101,   103,
     105,   107,   109,   111,   115,   117,   121,   123,   125,   127,
     131,   133,   135,   139,   141,   143,   147,   149,   151,   153,
     155,   159,   161,   163,   167,   169,   173,   175,   179,   181,
     185,   187,   191,   193,   197,   199,   203,   205,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   233,
     235,   239,   243,   247,   250,   253,   255,   257,   259,   263,
     266,   269,   271,   275,   277,   281,   283,   285,   287,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   319,   321,   325,   328,   331,   333,   335,   339,
     342,   345,   347,   351,   353,   357,   359,   361,   365,   369,
     373,   376,   379,   381,   383,   385,   387,   389,   391,   393,
     397,   400,   403,   406,   409,   412,   415,   417,   421,   423,
     427,   429,   433,   435,   439,   441,   445,   447,   451,   455,
     457,   459,   463,   465,   469,   472,   475,   479,   481,   485,
     487,   491,   493,   495,   497,   499,   501,   505,   507,   509,
     513,   517,   520,   523,   525,   529,   531,   535,   539,   542,
     545,   547,   549,   553,   555,   557,   559,   563,   565,   567,
     569,   573,   575,   579,   581,   585,   589,   592,   595,   597
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "BREAK",
  "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG",
  "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE",
  "WHILE", "BOOL", "COMPLEX", "IMAGINARY", "OPEN_SQUARE_BRACKET",
  "CLOSE_SQUARE_BRACKET", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS",
  "OPEN_CURLY_BRACKET", "CLOSE_CURLY_BRACKET", "DOT", "ARROW", "INCREMENT",
  "DECREMENT", "BITWISE_AND", "MULTIPLY", "ADD", "SUBTRACT", "BITWISE_NOR",
  "NOT", "DIVIDE", "MODULO", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL",
  "NOT_EQUAL", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR",
  "QUESTION_MARK", "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGN",
  "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN", "MODULO_ASSIGN", "ADD_ASSIGN",
  "SUBTRACT_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "HASH", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "PARENTHESIS_CLOSE", "$accept", "primary_expression",
  "constant", "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-214)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     861,  -214,  -214,  -214,  -214,   -55,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,   -20,   861,   861,  -214,   861,   861,   824,
    -214,  -214,    20,    24,    14,    17,    21,  -214,   592,   -26,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,   -41,  -214,
      51,    14,  -214,    51,   636,  -214,   -20,    66,   861,    51,
    -214,    45,    61,   -31,  -214,  -214,  -214,  -214,    84,   148,
     466,    59,   666,   666,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,   100,   175,   716,
    -214,    80,    91,   129,   123,   144,    89,    88,    96,   102,
     150,  -214,  -214,  -214,   262,  -214,  -214,    76,    12,   555,
     716,  -214,   -27,   466,  -214,  -214,    -1,   895,  -214,   895,
      82,   716,    85,    -7,   636,  -214,     2,  -214,   466,  -214,
    -214,   716,   716,    93,   124,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,   716,  -214,
    -214,   716,   716,   716,   716,   716,   716,   716,   716,   716,
     716,   716,   716,   716,   716,   716,   716,   716,   716,   716,
     141,   716,   143,   146,   407,   182,   142,   189,   716,   190,
     191,   169,   156,  -214,  -214,  -214,  -214,   198,   262,  -214,
    -214,   172,  -214,  -214,  -214,  -214,    14,   732,   127,  -214,
     -15,   153,   154,   162,  -214,   176,  -214,  -214,  -214,  -214,
     168,   716,  -214,  -214,  -214,  -214,   650,   221,  -214,  -214,
     111,  -214,  -214,  -214,   171,   -29,   199,   179,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,    80,    80,    91,    91,   129,
     129,   129,   129,   123,   123,   144,    89,    88,    96,   102,
      -4,  -214,   222,  -214,   407,   258,   351,   230,   716,   231,
     716,   716,   407,  -214,  -214,  -214,   716,   264,  -214,   266,
     716,  -214,  -214,  -214,   634,   232,   265,  -214,    59,  -214,
    -214,  -214,   636,   265,  -214,  -214,   716,   716,   407,  -214,
     276,   716,   236,  -214,     1,  -214,     5,    16,  -214,   279,
    -214,  -214,   280,  -214,  -214,  -214,    -6,  -214,  -214,  -214,
    -214,   716,   250,   716,   407,   407,   407,  -214,  -214,  -214,
     120,    19,   716,   251,   312,  -214,  -214,  -214,   253,   234,
     716,   407,  -214,   407,   235,  -214,  -214,   407,  -214
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,   100,   125,   105,   120,    95,   104,   128,   102,
     103,    98,   126,   101,   106,    96,   107,    99,   127,   108,
     109,   110,   204,   131,    90,    90,   111,    90,    90,     0,
     201,   203,   118,     0,   141,     0,    83,    91,    93,     0,
     130,    89,    85,    86,    87,    88,     1,   202,     0,   148,
     146,   140,    82,   131,     0,   208,   131,     0,   206,   131,
     132,   129,   123,     0,   121,   147,   149,    92,    93,     0,
       0,   165,     0,     0,    28,    29,    30,    31,    32,    33,
       2,     6,     7,     8,     4,     9,     3,    22,    34,     0,
      36,    40,    43,    46,    51,    54,    56,    58,    60,    62,
      64,    66,   159,    94,   182,   205,   209,     0,   141,   145,
       0,   116,     0,     0,    26,    79,     0,   115,   158,   115,
       0,     0,     0,     0,     0,   164,     0,   167,     0,    23,
      24,     0,    19,     0,     0,    14,    15,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    34,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,     0,     0,     0,   189,     0,
       0,     2,   188,   185,   186,   171,   172,     0,   181,   183,
     173,     0,   174,   175,   176,   133,   141,   143,   140,   156,
     131,     0,     0,   150,   152,   144,    81,   124,   117,   122,
       0,     0,     5,   114,   112,   113,     0,     0,   170,   160,
     165,   162,   166,   168,     0,     0,     0,    18,    20,    12,
      13,    67,    37,    38,    39,    41,    42,    44,    45,    47,
      48,    49,    50,    52,    53,    55,    57,    59,    61,    63,
       0,   199,     0,   198,   189,     0,   189,     0,     0,     0,
       0,     0,   189,   180,   184,   187,     0,    29,   142,     0,
       0,   154,   139,   138,     0,     0,    27,    80,   165,    35,
     169,   161,     0,     0,    10,    11,     0,     0,   189,   179,
       0,   189,     0,   197,     0,   200,     0,     0,   177,     0,
     137,   134,     0,   151,   153,   157,     0,   163,    21,    65,
     178,     0,     0,   189,   189,   189,   189,   135,   136,    16,
     165,     0,   189,     0,   190,   192,   193,    17,     0,     0,
     189,   189,   194,   189,     0,   191,   196,   189,   195
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -214,  -214,  -214,  -214,  -214,  -214,   -39,  -214,   -78,    68,
      69,    46,    65,   164,   165,   163,   166,   167,  -214,  -106,
     -52,  -214,   -69,  -108,   -35,  -214,     0,   151,  -214,   278,
    -214,   -62,   -97,   213,  -214,  -214,  -214,   224,   -25,  -214,
     -18,  -214,  -214,   -98,  -214,  -214,   287,   233,  -214,  -214,
      64,  -214,   -70,  -118,    62,  -213,  -214,  -214,   216,  -121,
    -214,   282,  -214,  -214,   155,  -214,  -161,  -214,  -214,  -214,
    -214,   315,  -214,  -214,  -214
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    85,    86,    87,   226,   227,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     115,   148,   182,   207,    22,    35,    56,    42,    36,    37,
      24,    25,   118,   214,    26,    33,    63,    64,    27,    28,
      68,    39,    61,    50,   269,   201,    40,    51,   202,   203,
     204,   205,   120,   103,   123,   124,   125,   126,   127,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      29,    30,    31,    57,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   116,   102,    55,   206,    38,   221,   282,   117,    49,
     197,   150,   284,   217,   111,   206,    59,   259,   208,     3,
     213,     3,   213,   106,    41,    41,    66,    41,    41,    23,
     114,    34,    32,   129,   130,    12,    34,    12,   219,   319,
     196,   107,   121,   210,   116,   119,    62,    18,   122,    18,
     149,   117,   -84,   255,   112,   117,   211,   117,   224,   116,
      62,    60,   225,   252,  -119,   206,   117,   287,    48,   183,
    -155,   149,   102,   232,   233,   234,   222,  -155,   220,   320,
     228,   211,   149,    49,   211,   108,   211,   109,   119,    52,
     211,   212,   119,   314,   119,   292,   231,   315,   266,   121,
     250,   211,    34,   119,   211,   122,    53,   282,   316,   200,
     104,   328,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     312,   151,   149,   289,     3,   110,   152,   153,   279,   164,
     131,   298,   132,   154,   155,   268,   133,   134,   135,   136,
      12,   121,   323,   183,   165,   270,   281,   122,    54,   277,
     121,   329,    18,   166,   307,   327,   122,   310,   195,   334,
     167,    49,   218,    66,   216,    69,    43,   149,    44,    45,
     229,   309,   271,   158,   159,   160,   161,   156,   157,   294,
     113,   296,   297,   324,   325,   326,    72,    73,    74,    75,
      76,    77,    78,    79,   239,   240,   241,   242,   162,   163,
     335,   230,   336,   251,   299,   253,   338,   254,   302,   168,
     169,   291,   235,   236,   256,   237,   238,   243,   244,   257,
     102,   258,   260,   261,   308,    80,    81,    82,    83,    84,
     262,   211,   321,   263,   265,   272,   273,   274,   149,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     276,   275,   280,   283,   286,     1,   170,   171,     2,     3,
     172,   173,   174,     4,   200,     5,     6,     7,   175,   176,
     177,     8,     9,    10,    11,    12,   178,    13,    14,    69,
      15,   285,   179,   288,   290,    16,    17,    18,   180,    19,
      20,    21,   293,   295,    70,   300,   104,   301,   313,   278,
      72,    73,    74,    75,    76,    77,    78,    79,   311,   305,
     317,   318,   322,   330,   331,   332,   333,   337,   245,   247,
     246,    67,   215,   248,  -189,   249,   209,    65,   304,   105,
     306,   198,   223,   264,    47,     0,     0,     0,     0,   181,
      81,    82,    83,    84,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,    69,    15,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,    70,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,   170,   171,     0,     0,   172,   173,   174,     0,     0,
       0,     0,     0,   175,   176,   177,     0,     0,     0,     0,
       0,   178,     0,     0,    69,     0,     0,   179,    80,    81,
      82,    83,    84,   180,     0,     0,     0,     0,     0,    70,
       0,   104,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,    69,   181,    81,    82,    83,    84,    16,
      17,    18,     0,    19,    20,    21,     0,     0,    70,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,    82,    83,    84,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,  -207,     1,     0,     0,
       2,     3,   199,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    69,     0,     0,    54,    16,    17,    18,
       0,    19,    20,    21,     0,     0,     0,    69,    70,     0,
      71,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    70,    69,   278,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,   303,   128,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,    82,
      83,    84,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,    82,    83,    84,    70,    69,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,    70,     0,     0,     0,     0,     0,
      72,    73,    74,   267,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    46,     0,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       7,     0,     0,     0,     0,     9,    10,     0,    12,     0,
      13,    14,     0,     0,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    70,    54,    38,   110,    23,   124,   220,    70,    34,
     108,    89,    41,   121,    45,   121,    42,   178,    45,     7,
     117,     7,   119,    58,    24,    25,    51,    27,    28,    29,
      69,    51,    87,    72,    73,    23,    51,    23,    45,    45,
      28,    59,    40,   113,   113,    70,    87,    35,    46,    35,
      89,   113,    72,   174,    85,   117,    85,   119,   128,   128,
      87,    87,   131,   171,    44,   171,   128,    71,    44,   104,
      85,   110,   124,   151,   152,   153,    74,    92,    85,    85,
     132,    85,   121,   108,    85,    40,    85,    42,   113,    72,
      85,    92,   117,    92,   119,   256,   148,    92,   196,    40,
     169,    85,    51,   128,    85,    46,    85,   320,    92,   109,
      44,    92,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     291,    51,   171,   254,     7,    74,    56,    57,   216,    50,
      40,   262,    42,    52,    53,   197,    46,    47,    48,    49,
      23,    40,   313,   188,    66,    28,    45,    46,    74,   211,
      40,   322,    35,    67,   282,    45,    46,   288,    92,   330,
      68,   196,    87,   198,    92,    27,    25,   216,    27,    28,
      87,   287,   200,    60,    61,    62,    63,    58,    59,   258,
      42,   260,   261,   314,   315,   316,    48,    49,    50,    51,
      52,    53,    54,    55,   158,   159,   160,   161,    64,    65,
     331,    87,   333,    72,   266,    72,   337,    71,   270,    69,
      70,   256,   154,   155,    42,   156,   157,   162,   163,    87,
     282,    42,    42,    42,   286,    87,    88,    89,    90,    91,
      71,    85,   311,    45,    72,    92,    92,    85,   287,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      92,    85,    41,    92,    85,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   274,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    92,    30,    71,    36,    33,    34,    35,    36,    37,
      38,    39,    72,    72,    42,    41,    44,    41,    72,    44,
      48,    49,    50,    51,    52,    53,    54,    55,    42,    87,
      41,    41,    72,    72,    12,    72,    92,    92,   164,   166,
     165,    53,   119,   167,    72,   168,   112,    50,   274,    57,
     278,   108,   126,   188,    29,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,     4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    27,    -1,    -1,    30,    87,    88,
      89,    90,    91,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    87,    88,    89,    90,    91,    33,
      34,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    44,     3,    -1,    -1,
       6,     7,    87,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    27,    -1,    -1,    74,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    -1,    27,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    42,    27,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    73,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    42,    27,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,     0,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   117,   119,   123,   124,   127,   131,   132,   163,
     164,   165,    87,   128,    51,   118,   121,   122,   133,   134,
     139,   119,   120,   120,   120,   120,     0,   164,    44,   131,
     136,   140,    72,    85,    74,   117,   119,   166,   167,    42,
      87,   135,    87,   129,   130,   139,   131,   122,   133,    27,
      42,    44,    48,    49,    50,    51,    52,    53,    54,    55,
      87,    88,    89,    90,    91,    94,    95,    96,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   146,    44,   154,   117,   133,    40,    42,
      74,    45,    85,    42,    99,   113,   115,   124,   125,   131,
     145,    40,    46,   147,   148,   149,   150,   151,    42,    99,
      99,    40,    42,    46,    47,    48,    49,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,   114,    99,
     101,    51,    56,    57,    52,    53,    58,    59,    60,    61,
      62,    63,    64,    65,    50,    66,    67,    68,    69,    70,
       4,     5,     8,     9,    10,    16,    17,    18,    24,    30,
      36,    87,   115,   117,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    92,    28,   136,   140,    87,
     119,   138,   141,   142,   143,   144,   112,   116,    45,   130,
     145,    85,    92,   125,   126,   126,    92,   116,    87,    45,
      85,   146,    74,   151,   145,   115,    97,    98,   113,    87,
      87,   113,   101,   101,   101,   102,   102,   103,   103,   104,
     104,   104,   104,   105,   105,   106,   107,   108,   109,   110,
     115,    72,   116,    72,    71,   152,    42,    87,    42,   159,
      42,    42,    71,    45,   157,    72,   136,    51,   113,   137,
      28,   133,    92,    92,    85,    85,    92,   113,    44,   101,
      41,    45,   148,    92,    41,    92,    85,    71,    71,   152,
      36,   117,   159,    72,   115,    72,   115,   115,   152,   113,
      41,    41,   113,    73,   143,    87,   147,   146,   113,   112,
     152,    42,   159,    72,    92,    92,    92,    41,    41,    45,
      85,   115,    72,   159,   152,   152,   152,    45,    92,   159,
      72,    12,    72,    92,   159,   152,   152,    92,   152
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   117,   118,   118,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   132,   133,
     134,   134,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   145,   146,
     146,   146,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   159,   159,
     160,   160,   160,   161,   161,   161,   161,   162,   162,   162,
     162,   163,   163,   164,   164,   165,   166,   166,   167,   167
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     0,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     0,     2,     2,     2,     2,     1,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     0,     5,     6,     2,     1,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     0,     1,     3,     5,     6,     6,     5,     4,     4,
       1,     0,     1,     0,     1,     0,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     2,     4,     1,     0,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     1,     0,     1,     2,     1,     1,     2,     1,     0,
       5,     7,     5,     5,     7,     9,     8,     3,     2,     2,
       3,     1,     2,     1,     1,     4,     1,     0,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 38 "asgn4_20CS10024_20CS30015.y"
                        { printf("primary-expression --> identifier\n"); }
#line 1864 "y.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 40 "asgn4_20CS10024_20CS30015.y"
                        { printf("primary-expression --> constant\n"); }
#line 1870 "y.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 42 "asgn4_20CS10024_20CS30015.y"
                        { printf("primary-expression --> string-literal\n"); }
#line 1876 "y.tab.c"
    break;

  case 5: /* primary_expression: OPEN_PARENTHESIS expression PARENTHESIS_CLOSE  */
#line 44 "asgn4_20CS10024_20CS30015.y"
                        { printf("primary-expression --> ( expression )\n"); }
#line 1882 "y.tab.c"
    break;

  case 6: /* constant: INTEGER_CONSTANT  */
#line 48 "asgn4_20CS10024_20CS30015.y"
              { printf("constant --> integer-constant\n"); }
#line 1888 "y.tab.c"
    break;

  case 7: /* constant: FLOATING_CONSTANT  */
#line 50 "asgn4_20CS10024_20CS30015.y"
              { printf("constant --> floating-constant\n"); }
#line 1894 "y.tab.c"
    break;

  case 8: /* constant: CHARACTER_CONSTANT  */
#line 52 "asgn4_20CS10024_20CS30015.y"
              { printf("constant --> char-constant\n"); }
#line 1900 "y.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 56 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> primary-expression\n"); }
#line 1906 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression OPEN_SQUARE_BRACKET expression CLOSE_SQUARE_BRACKET  */
#line 58 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> postfix-expression [ expression ]\n"); }
#line 1912 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression OPEN_PARENTHESIS argument_expression_list_opt PARENTHESIS_CLOSE  */
#line 60 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> postfix-expression ( argument-expression-list-opt )\n"); }
#line 1918 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 62 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> postfix-expression . identifier\n"); }
#line 1924 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 64 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> postfix-expression -> identifier\n"); }
#line 1930 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 66 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> postfix-expression ++\n"); }
#line 1936 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 68 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> postfix-expression --\n"); }
#line 1942 "y.tab.c"
    break;

  case 16: /* postfix_expression: OPEN_PARENTHESIS type_name PARENTHESIS_CLOSE OPEN_CURLY_BRACKET initializer_list CLOSE_CURLY_BRACKET  */
#line 70 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> ( type-name ) { initializer-list }\n"); }
#line 1948 "y.tab.c"
    break;

  case 17: /* postfix_expression: OPEN_PARENTHESIS type_name PARENTHESIS_CLOSE OPEN_CURLY_BRACKET initializer_list COMMA CLOSE_CURLY_BRACKET  */
#line 72 "asgn4_20CS10024_20CS30015.y"
                        { printf("postfix-expression --> ( type-name ) { initializer-list , }\n"); }
#line 1954 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: argument_expression_list  */
#line 76 "asgn4_20CS10024_20CS30015.y"
                                  { printf("argument-expression-list-opt --> argument-expression-list\n"); }
#line 1960 "y.tab.c"
    break;

  case 19: /* argument_expression_list_opt: %empty  */
#line 78 "asgn4_20CS10024_20CS30015.y"
                                  { printf("argument-expression-list-opt --> epsilon\n"); }
#line 1966 "y.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 82 "asgn4_20CS10024_20CS30015.y"
                              { printf("argument-expression-list --> assignment-expression\n"); }
#line 1972 "y.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 84 "asgn4_20CS10024_20CS30015.y"
                              { printf("argument-expression-list --> argument-expression-list , assignment-expression\n"); }
#line 1978 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 88 "asgn4_20CS10024_20CS30015.y"
                      { printf("unary-expression --> postfix-expression\n"); }
#line 1984 "y.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 90 "asgn4_20CS10024_20CS30015.y"
                      { printf("unary-expression --> ++ unary-expression\n"); }
#line 1990 "y.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 92 "asgn4_20CS10024_20CS30015.y"
                      { printf("unary-expression --> -- unary-expression\n"); }
#line 1996 "y.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 94 "asgn4_20CS10024_20CS30015.y"
                      { printf("unary-operator --> cast-expression\n"); }
#line 2002 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 96 "asgn4_20CS10024_20CS30015.y"
                      { printf("unary-expression --> sizeof unary-expression\n"); }
#line 2008 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF OPEN_PARENTHESIS type_name PARENTHESIS_CLOSE  */
#line 98 "asgn4_20CS10024_20CS30015.y"
                      { printf("unary-expression --> sizeof ( type-name )\n"); }
#line 2014 "y.tab.c"
    break;

  case 28: /* unary_operator: BITWISE_AND  */
#line 102 "asgn4_20CS10024_20CS30015.y"
                    { printf("unary-operator --> &\n"); }
#line 2020 "y.tab.c"
    break;

  case 29: /* unary_operator: MULTIPLY  */
#line 104 "asgn4_20CS10024_20CS30015.y"
                    { printf("unary-operator --> *\n"); }
#line 2026 "y.tab.c"
    break;

  case 30: /* unary_operator: ADD  */
#line 106 "asgn4_20CS10024_20CS30015.y"
                    { printf("unary-operator --> +\n"); }
#line 2032 "y.tab.c"
    break;

  case 31: /* unary_operator: SUBTRACT  */
#line 108 "asgn4_20CS10024_20CS30015.y"
                    { printf("unary-operator --> -\n"); }
#line 2038 "y.tab.c"
    break;

  case 32: /* unary_operator: BITWISE_NOR  */
#line 110 "asgn4_20CS10024_20CS30015.y"
                    { printf("unary-operator --> ~\n"); }
#line 2044 "y.tab.c"
    break;

  case 33: /* unary_operator: NOT  */
#line 112 "asgn4_20CS10024_20CS30015.y"
                    { printf("unary-operator --> !\n"); }
#line 2050 "y.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 116 "asgn4_20CS10024_20CS30015.y"
                     { printf("cast-expression --> unary-expression\n"); }
#line 2056 "y.tab.c"
    break;

  case 35: /* cast_expression: OPEN_PARENTHESIS type_name PARENTHESIS_CLOSE cast_expression  */
#line 118 "asgn4_20CS10024_20CS30015.y"
                     { printf("cast-expression --> ( type-name ) cast-expression\n"); }
#line 2062 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 122 "asgn4_20CS10024_20CS30015.y"
                               { printf("multiplicative-expression --> cast-expression\n"); }
#line 2068 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 124 "asgn4_20CS10024_20CS30015.y"
                               { printf("multiplicative-expression --> multiplicative-expression * cast-expression\n"); }
#line 2074 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression DIVIDE cast_expression  */
#line 126 "asgn4_20CS10024_20CS30015.y"
                               { printf("multiplicative-expression --> multiplicative-expression / cast-expression\n"); }
#line 2080 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 128 "asgn4_20CS10024_20CS30015.y"
                               { printf("multiplicative-expression --> multiplicative-expression %% cast-expression\n"); }
#line 2086 "y.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 132 "asgn4_20CS10024_20CS30015.y"
                         { printf("additive-expression --> multiplicative-expression\n"); }
#line 2092 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression ADD multiplicative_expression  */
#line 134 "asgn4_20CS10024_20CS30015.y"
                         { printf("additive-expression --> additive-expression + multiplicative-expression\n"); }
#line 2098 "y.tab.c"
    break;

  case 42: /* additive_expression: additive_expression SUBTRACT multiplicative_expression  */
#line 136 "asgn4_20CS10024_20CS30015.y"
                         { printf("additive-expression --> additive-expression - multiplicative-expression\n"); }
#line 2104 "y.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 140 "asgn4_20CS10024_20CS30015.y"
                      { printf("shift-expression --> additive-expression\n"); }
#line 2110 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 142 "asgn4_20CS10024_20CS30015.y"
                      { printf("shift-expression --> shift-expression << additive-expression\n"); }
#line 2116 "y.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 144 "asgn4_20CS10024_20CS30015.y"
                      { printf("shift-expression --> shift-expression >> additive-expression\n"); }
#line 2122 "y.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 148 "asgn4_20CS10024_20CS30015.y"
                           { printf("relational-expression --> shift-expression\n"); }
#line 2128 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 150 "asgn4_20CS10024_20CS30015.y"
                           { printf("relational-expression --> relational-expression < shift-expression\n"); }
#line 2134 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 152 "asgn4_20CS10024_20CS30015.y"
                           { printf("relational-expression --> relational-expression > shift-expression\n"); }
#line 2140 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 154 "asgn4_20CS10024_20CS30015.y"
                           { printf("relational-expression --> relational-expression <= shift-expression\n"); }
#line 2146 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 156 "asgn4_20CS10024_20CS30015.y"
                           { printf("relational-expression --> relational-expression >= shift-expression\n"); }
#line 2152 "y.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 160 "asgn4_20CS10024_20CS30015.y"
                         { printf("equality-expression --> relational-expression\n"); }
#line 2158 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 162 "asgn4_20CS10024_20CS30015.y"
                          { printf("equality-expression --> equality-expression == relational-expression\n"); }
#line 2164 "y.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 164 "asgn4_20CS10024_20CS30015.y"
                          { printf("equality-expression --> equality-expression != relational-expression\n"); }
#line 2170 "y.tab.c"
    break;

  case 54: /* and_expression: equality_expression  */
#line 168 "asgn4_20CS10024_20CS30015.y"
                    { printf("AND-expression --> equality-expression\n"); }
#line 2176 "y.tab.c"
    break;

  case 55: /* and_expression: and_expression BITWISE_AND equality_expression  */
#line 170 "asgn4_20CS10024_20CS30015.y"
                    { printf("AND-expression --> AND-expression & equality-expression\n"); }
#line 2182 "y.tab.c"
    break;

  case 56: /* exclusive_or_expression: and_expression  */
#line 174 "asgn4_20CS10024_20CS30015.y"
                             { printf("exclusive-OR-expression --> AND-expression\n"); }
#line 2188 "y.tab.c"
    break;

  case 57: /* exclusive_or_expression: exclusive_or_expression BITWISE_XOR and_expression  */
#line 176 "asgn4_20CS10024_20CS30015.y"
                             { printf("exclusive-OR-expression --> exclusive-OR-expression ^ AND-expression\n"); }
#line 2194 "y.tab.c"
    break;

  case 58: /* inclusive_or_expression: exclusive_or_expression  */
#line 180 "asgn4_20CS10024_20CS30015.y"
                             { printf("inclusive-OR-expression --> exclusive-OR-expression\n"); }
#line 2200 "y.tab.c"
    break;

  case 59: /* inclusive_or_expression: inclusive_or_expression BITWISE_OR exclusive_or_expression  */
#line 182 "asgn4_20CS10024_20CS30015.y"
                             { printf("inclusive-OR-expression --> inclusive-OR-expression | exclusive-OR-expression\n"); }
#line 2206 "y.tab.c"
    break;

  case 60: /* logical_and_expression: inclusive_or_expression  */
#line 186 "asgn4_20CS10024_20CS30015.y"
                            { printf("logical-AND-expression --> inclusive-OR-expression\n"); }
#line 2212 "y.tab.c"
    break;

  case 61: /* logical_and_expression: logical_and_expression LOGICAL_AND inclusive_or_expression  */
#line 188 "asgn4_20CS10024_20CS30015.y"
                            { printf("logical-AND-expression --> logical-AND-expression && inclusive-OR-expression\n"); }
#line 2218 "y.tab.c"
    break;

  case 62: /* logical_or_expression: logical_and_expression  */
#line 192 "asgn4_20CS10024_20CS30015.y"
                           { printf("logical-OR-expression --> logical-AND-expression\n"); }
#line 2224 "y.tab.c"
    break;

  case 63: /* logical_or_expression: logical_or_expression LOGICAL_OR logical_and_expression  */
#line 194 "asgn4_20CS10024_20CS30015.y"
                           { printf("logical-OR-expression --> logical_or_expression || logical-AND-expression\n"); }
#line 2230 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_or_expression  */
#line 198 "asgn4_20CS10024_20CS30015.y"
                            { printf("conditional-expression --> logical-OR-expression\n"); }
#line 2236 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_or_expression QUESTION_MARK expression COLON conditional_expression  */
#line 200 "asgn4_20CS10024_20CS30015.y"
                            { printf("conditional-expression --> logical-OR-expression ? expression : conditional-expression\n"); }
#line 2242 "y.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 204 "asgn4_20CS10024_20CS30015.y"
                           { printf("assignment-expression --> conditional-expression\n"); }
#line 2248 "y.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 206 "asgn4_20CS10024_20CS30015.y"
                           { printf("assignment-expression --> unary-expression assignment-operator assignment-expression\n"); }
#line 2254 "y.tab.c"
    break;

  case 68: /* assignment_operator: ASSIGN  */
#line 210 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> =\n"); }
#line 2260 "y.tab.c"
    break;

  case 69: /* assignment_operator: MULTIPLY_ASSIGN  */
#line 212 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> *=\n"); }
#line 2266 "y.tab.c"
    break;

  case 70: /* assignment_operator: DIVIDE_ASSIGN  */
#line 214 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> /=\n"); }
#line 2272 "y.tab.c"
    break;

  case 71: /* assignment_operator: MODULO_ASSIGN  */
#line 216 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> %%=\n"); }
#line 2278 "y.tab.c"
    break;

  case 72: /* assignment_operator: ADD_ASSIGN  */
#line 218 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> +=\n"); }
#line 2284 "y.tab.c"
    break;

  case 73: /* assignment_operator: SUBTRACT_ASSIGN  */
#line 220 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> -=\n"); }
#line 2290 "y.tab.c"
    break;

  case 74: /* assignment_operator: LEFT_SHIFT_ASSIGN  */
#line 222 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> <<=\n"); }
#line 2296 "y.tab.c"
    break;

  case 75: /* assignment_operator: RIGHT_SHIFT_ASSIGN  */
#line 224 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> >>=\n"); }
#line 2302 "y.tab.c"
    break;

  case 76: /* assignment_operator: AND_ASSIGN  */
#line 226 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> &=\n"); }
#line 2308 "y.tab.c"
    break;

  case 77: /* assignment_operator: XOR_ASSIGN  */
#line 228 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> ^=\n"); }
#line 2314 "y.tab.c"
    break;

  case 78: /* assignment_operator: OR_ASSIGN  */
#line 230 "asgn4_20CS10024_20CS30015.y"
                         { printf("assignment-operator --> |=\n"); }
#line 2320 "y.tab.c"
    break;

  case 79: /* expression: assignment_expression  */
#line 234 "asgn4_20CS10024_20CS30015.y"
                { printf("expression --> assignment-expression\n"); }
#line 2326 "y.tab.c"
    break;

  case 80: /* expression: expression COMMA assignment_expression  */
#line 236 "asgn4_20CS10024_20CS30015.y"
                { printf("expression --> expression , assignment-expression\n"); }
#line 2332 "y.tab.c"
    break;

  case 81: /* constant_expression: conditional_expression  */
#line 240 "asgn4_20CS10024_20CS30015.y"
                         { printf("constant-expression --> conditional-expression\n"); }
#line 2338 "y.tab.c"
    break;

  case 82: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 244 "asgn4_20CS10024_20CS30015.y"
                 { printf("declaration --> declaration-specifiers init-declarator-list-opt ;\n"); }
#line 2344 "y.tab.c"
    break;

  case 83: /* init_declarator_list_opt: init_declarator_list  */
#line 248 "asgn4_20CS10024_20CS30015.y"
                              { printf("init-declarator-list-opt --> init-declarator-list\n"); }
#line 2350 "y.tab.c"
    break;

  case 84: /* init_declarator_list_opt: %empty  */
#line 250 "asgn4_20CS10024_20CS30015.y"
                              { printf("init-declarator-list-opt --> epsilon\n"); }
#line 2356 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 254 "asgn4_20CS10024_20CS30015.y"
                            { printf("declaration-specifiers --> storage-class-specifier declaration-specifiers-opt\n"); }
#line 2362 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 256 "asgn4_20CS10024_20CS30015.y"
                            { printf("declaration-specifiers --> type-specifier declaration-specifiers-opt\n"); }
#line 2368 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 258 "asgn4_20CS10024_20CS30015.y"
                            { printf("declaration-specifiers --> type-qualifier declaration-specifiers-opt\n"); }
#line 2374 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 260 "asgn4_20CS10024_20CS30015.y"
                            { printf("declaration-specifiers --> function-specifier declaration-specifiers-opt\n"); }
#line 2380 "y.tab.c"
    break;

  case 89: /* declaration_specifiers_opt: declaration_specifiers  */
#line 264 "asgn4_20CS10024_20CS30015.y"
                                { printf("declaration-specifiers-opt --> declaration-specifiers\n"); }
#line 2386 "y.tab.c"
    break;

  case 90: /* declaration_specifiers_opt: %empty  */
#line 266 "asgn4_20CS10024_20CS30015.y"
                                { printf("declaration-specifiers-opt --> epsilon\n"); }
#line 2392 "y.tab.c"
    break;

  case 91: /* init_declarator_list: init_declarator  */
#line 270 "asgn4_20CS10024_20CS30015.y"
                          { printf("init-declarator-list --> init-declarator\n"); }
#line 2398 "y.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 272 "asgn4_20CS10024_20CS30015.y"
                          { printf("init-declarator-list --> init-declarator-list , init-declarator\n"); }
#line 2404 "y.tab.c"
    break;

  case 93: /* init_declarator: declarator  */
#line 276 "asgn4_20CS10024_20CS30015.y"
                     { printf("init-declarator --> declarator\n"); }
#line 2410 "y.tab.c"
    break;

  case 94: /* init_declarator: declarator ASSIGN initializer  */
#line 278 "asgn4_20CS10024_20CS30015.y"
                     { printf("init-declarator --> declarator = initializer\n"); }
#line 2416 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: EXTERN  */
#line 282 "asgn4_20CS10024_20CS30015.y"
                             { printf("storage-class-specifier --> extern\n"); }
#line 2422 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: STATIC  */
#line 284 "asgn4_20CS10024_20CS30015.y"
                             { printf("storage-class-specifier --> static\n"); }
#line 2428 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: AUTO  */
#line 286 "asgn4_20CS10024_20CS30015.y"
                             { printf("storage-class-specifier --> auto\n"); }
#line 2434 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: REGISTER  */
#line 288 "asgn4_20CS10024_20CS30015.y"
                             { printf("storage-class-specifier --> register\n"); }
#line 2440 "y.tab.c"
    break;

  case 99: /* type_specifier: VOID  */
#line 292 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> void\n"); }
#line 2446 "y.tab.c"
    break;

  case 100: /* type_specifier: CHAR  */
#line 294 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> char\n"); }
#line 2452 "y.tab.c"
    break;

  case 101: /* type_specifier: SHORT  */
#line 296 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> short\n"); }
#line 2458 "y.tab.c"
    break;

  case 102: /* type_specifier: INT  */
#line 298 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> int\n"); }
#line 2464 "y.tab.c"
    break;

  case 103: /* type_specifier: LONG  */
#line 300 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> long\n"); }
#line 2470 "y.tab.c"
    break;

  case 104: /* type_specifier: FLOAT  */
#line 302 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> float\n"); }
#line 2476 "y.tab.c"
    break;

  case 105: /* type_specifier: DOUBLE  */
#line 304 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> double\n"); }
#line 2482 "y.tab.c"
    break;

  case 106: /* type_specifier: SIGNED  */
#line 306 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> signed\n"); }
#line 2488 "y.tab.c"
    break;

  case 107: /* type_specifier: UNSIGNED  */
#line 308 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> unsigned\n"); }
#line 2494 "y.tab.c"
    break;

  case 108: /* type_specifier: BOOL  */
#line 310 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> _Bool\n"); }
#line 2500 "y.tab.c"
    break;

  case 109: /* type_specifier: COMPLEX  */
#line 312 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> _Complex\n"); }
#line 2506 "y.tab.c"
    break;

  case 110: /* type_specifier: IMAGINARY  */
#line 314 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> _Imaginary\n"); }
#line 2512 "y.tab.c"
    break;

  case 111: /* type_specifier: enum_specifier  */
#line 316 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-specifier --> enum-specifier\n"); }
#line 2518 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 320 "asgn4_20CS10024_20CS30015.y"
                              { printf("specifier-qualifier-list --> type-specifier specifier-qualifier-list-opt\n"); }
#line 2524 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 322 "asgn4_20CS10024_20CS30015.y"
                              { printf("specifier-qualifier-list --> type-qualifier specifier-qualifier-list-opt\n"); }
#line 2530 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 326 "asgn4_20CS10024_20CS30015.y"
                                  { printf("specifier-qualifier-list-opt --> specifier-qualifier-list\n"); }
#line 2536 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list_opt: %empty  */
#line 328 "asgn4_20CS10024_20CS30015.y"
                                  { printf("specifier-qualifier-list-opt --> epsilon\n"); }
#line 2542 "y.tab.c"
    break;

  case 116: /* enum_specifier: ENUM identifier_opt OPEN_CURLY_BRACKET enumerator_list CLOSE_CURLY_BRACKET  */
#line 332 "asgn4_20CS10024_20CS30015.y"
                    { printf("enum-specifier --> enum identifier-opt { enumerator-list }\n"); }
#line 2548 "y.tab.c"
    break;

  case 117: /* enum_specifier: ENUM identifier_opt OPEN_CURLY_BRACKET enumerator_list COMMA CLOSE_CURLY_BRACKET  */
#line 334 "asgn4_20CS10024_20CS30015.y"
                    { printf("enum-specifier --> enum identifier-opt { enumerator-list , }\n"); }
#line 2554 "y.tab.c"
    break;

  case 118: /* enum_specifier: ENUM IDENTIFIER  */
#line 336 "asgn4_20CS10024_20CS30015.y"
                    { printf("enum-specifier --> enum identifier\n"); }
#line 2560 "y.tab.c"
    break;

  case 119: /* identifier_opt: IDENTIFIER  */
#line 340 "asgn4_20CS10024_20CS30015.y"
                    { printf("identifier-opt --> identifier\n"); }
#line 2566 "y.tab.c"
    break;

  case 120: /* identifier_opt: %empty  */
#line 342 "asgn4_20CS10024_20CS30015.y"
                    { printf("identifier-opt --> epsilon\n"); }
#line 2572 "y.tab.c"
    break;

  case 121: /* enumerator_list: enumerator  */
#line 346 "asgn4_20CS10024_20CS30015.y"
                     { printf("enumerator-list --> enumerator\n"); }
#line 2578 "y.tab.c"
    break;

  case 122: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 348 "asgn4_20CS10024_20CS30015.y"
                     { printf("enumerator-list --> enumerator-list , enumerator\n"); }
#line 2584 "y.tab.c"
    break;

  case 123: /* enumerator: IDENTIFIER  */
#line 352 "asgn4_20CS10024_20CS30015.y"
                { printf("enumerator --> enumeration-constant\n"); }
#line 2590 "y.tab.c"
    break;

  case 124: /* enumerator: IDENTIFIER ASSIGN constant_expression  */
#line 354 "asgn4_20CS10024_20CS30015.y"
                { printf("enumerator --> enumeration-constant = constant-expression\n"); }
#line 2596 "y.tab.c"
    break;

  case 125: /* type_qualifier: CONST  */
#line 358 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-qualifier --> const\n"); }
#line 2602 "y.tab.c"
    break;

  case 126: /* type_qualifier: RESTRICT  */
#line 360 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-qualifier --> restrict\n"); }
#line 2608 "y.tab.c"
    break;

  case 127: /* type_qualifier: VOLATILE  */
#line 362 "asgn4_20CS10024_20CS30015.y"
                    { printf("type-qualifier --> volatile\n"); }
#line 2614 "y.tab.c"
    break;

  case 128: /* function_specifier: INLINE  */
#line 366 "asgn4_20CS10024_20CS30015.y"
                        { printf("function-specifier --> inline\n"); }
#line 2620 "y.tab.c"
    break;

  case 129: /* declarator: pointer_opt direct_declarator  */
#line 370 "asgn4_20CS10024_20CS30015.y"
                { printf("declarator --> pointer-opt direct-declarator\n"); }
#line 2626 "y.tab.c"
    break;

  case 130: /* pointer_opt: pointer  */
#line 374 "asgn4_20CS10024_20CS30015.y"
                 { printf("pointer-opt --> pointer\n"); }
#line 2632 "y.tab.c"
    break;

  case 131: /* pointer_opt: %empty  */
#line 376 "asgn4_20CS10024_20CS30015.y"
                 { printf("pointer-opt --> epsilon\n"); }
#line 2638 "y.tab.c"
    break;

  case 132: /* direct_declarator: IDENTIFIER  */
#line 380 "asgn4_20CS10024_20CS30015.y"
                       { printf("direct-declarator --> identifier\n"); }
#line 2644 "y.tab.c"
    break;

  case 133: /* direct_declarator: OPEN_PARENTHESIS declarator PARENTHESIS_CLOSE  */
#line 382 "asgn4_20CS10024_20CS30015.y"
                       { printf("direct-declarator --> ( declarator )\n"); }
#line 2650 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator OPEN_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt CLOSE_SQUARE_BRACKET  */
#line 384 "asgn4_20CS10024_20CS30015.y"
                       { printf("direct-declarator --> direct_declarator [ type-qualifier-list-opt assignment-expression-opt ]\n"); }
#line 2656 "y.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator OPEN_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression CLOSE_SQUARE_BRACKET  */
#line 386 "asgn4_20CS10024_20CS30015.y"
                       { printf("direct-declarator --> direct_declarator [ static type-qualifier-list-opt assignment-expression ]\n"); }
#line 2662 "y.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator OPEN_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression CLOSE_SQUARE_BRACKET  */
#line 388 "asgn4_20CS10024_20CS30015.y"
                       { printf("direct-declarator --> direct_declarator [ type-qualifier-list static assignment-expression ]\n"); }
#line 2668 "y.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator OPEN_SQUARE_BRACKET type_qualifier_list_opt MULTIPLY CLOSE_SQUARE_BRACKET  */
#line 390 "asgn4_20CS10024_20CS30015.y"
                       { printf("direct-declarator --> direct_declarator [ type-qualifier-list-opt * ]\n"); }
#line 2674 "y.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator OPEN_PARENTHESIS parameter_type_list PARENTHESIS_CLOSE  */
#line 392 "asgn4_20CS10024_20CS30015.y"
                       { printf("direct-declarator --> direct_declarator ( parameter-type-list )\n"); }
#line 2680 "y.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator OPEN_PARENTHESIS identifier_list_opt PARENTHESIS_CLOSE  */
#line 394 "asgn4_20CS10024_20CS30015.y"
                       { printf("direct-declarator --> direct_declarator ( identifier-list-opt )\n"); }
#line 2686 "y.tab.c"
    break;

  case 140: /* type_qualifier_list_opt: type_qualifier_list  */
#line 398 "asgn4_20CS10024_20CS30015.y"
                             { printf("type-qualifier-list-opt --> type-qualifier-list\n"); }
#line 2692 "y.tab.c"
    break;

  case 141: /* type_qualifier_list_opt: %empty  */
#line 400 "asgn4_20CS10024_20CS30015.y"
                             { printf("type-qualifier-list-opt --> epsilon\n"); }
#line 2698 "y.tab.c"
    break;

  case 142: /* assignment_expression_opt: assignment_expression  */
#line 404 "asgn4_20CS10024_20CS30015.y"
                               { printf("assignment-expression-opt --> assignment-expression\n"); }
#line 2704 "y.tab.c"
    break;

  case 143: /* assignment_expression_opt: %empty  */
#line 406 "asgn4_20CS10024_20CS30015.y"
                               { printf("assignment-expression-opt --> epsilon\n"); }
#line 2710 "y.tab.c"
    break;

  case 144: /* identifier_list_opt: identifier_list  */
#line 410 "asgn4_20CS10024_20CS30015.y"
                         { printf("identifier-list-opt --> identifier-list\n"); }
#line 2716 "y.tab.c"
    break;

  case 145: /* identifier_list_opt: %empty  */
#line 412 "asgn4_20CS10024_20CS30015.y"
                         { printf("identifier-list-opt --> epsilon\n"); }
#line 2722 "y.tab.c"
    break;

  case 146: /* pointer: MULTIPLY type_qualifier_list_opt  */
#line 416 "asgn4_20CS10024_20CS30015.y"
             { printf("pointer --> * type-qualifier-list-opt\n"); }
#line 2728 "y.tab.c"
    break;

  case 147: /* pointer: MULTIPLY type_qualifier_list_opt pointer  */
#line 418 "asgn4_20CS10024_20CS30015.y"
             { printf("pointer --> * type-qualifier-list-opt pointer\n"); }
#line 2734 "y.tab.c"
    break;

  case 148: /* type_qualifier_list: type_qualifier  */
#line 422 "asgn4_20CS10024_20CS30015.y"
                         { printf("type-qualifier-list --> type-qualifier\n"); }
#line 2740 "y.tab.c"
    break;

  case 149: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 424 "asgn4_20CS10024_20CS30015.y"
                         { printf("type-qualifier-list --> type-qualifier-list type-qualifier\n"); }
#line 2746 "y.tab.c"
    break;

  case 150: /* parameter_type_list: parameter_list  */
#line 428 "asgn4_20CS10024_20CS30015.y"
                         { printf("parameter-type-list --> parameter-list\n"); }
#line 2752 "y.tab.c"
    break;

  case 151: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 430 "asgn4_20CS10024_20CS30015.y"
                         { printf("parameter-type-list --> parameter-list , ...\n"); }
#line 2758 "y.tab.c"
    break;

  case 152: /* parameter_list: parameter_declaration  */
#line 434 "asgn4_20CS10024_20CS30015.y"
                    { printf("parameter-list --> parameter-declaration\n"); }
#line 2764 "y.tab.c"
    break;

  case 153: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 436 "asgn4_20CS10024_20CS30015.y"
                    { printf("parameter-list --> parameter-list , parameter-declaration\n"); }
#line 2770 "y.tab.c"
    break;

  case 154: /* parameter_declaration: declaration_specifiers declarator  */
#line 440 "asgn4_20CS10024_20CS30015.y"
                           { printf("parameter-declaration --> declaration-specifiers declarator\n"); }
#line 2776 "y.tab.c"
    break;

  case 155: /* parameter_declaration: declaration_specifiers  */
#line 442 "asgn4_20CS10024_20CS30015.y"
                           { printf("parameter-declaration --> declaration-specifiers\n"); }
#line 2782 "y.tab.c"
    break;

  case 156: /* identifier_list: IDENTIFIER  */
#line 446 "asgn4_20CS10024_20CS30015.y"
                     { printf("identifier-list --> identifier\n"); }
#line 2788 "y.tab.c"
    break;

  case 157: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 448 "asgn4_20CS10024_20CS30015.y"
                     { printf("identifier-list --> identifier_list , identifier\n"); }
#line 2794 "y.tab.c"
    break;

  case 158: /* type_name: specifier_qualifier_list  */
#line 452 "asgn4_20CS10024_20CS30015.y"
               { printf("type-name --> specifier-qualifier-list\n"); }
#line 2800 "y.tab.c"
    break;

  case 159: /* initializer: assignment_expression  */
#line 456 "asgn4_20CS10024_20CS30015.y"
                 { printf("initializer --> assignment-expression\n"); }
#line 2806 "y.tab.c"
    break;

  case 160: /* initializer: OPEN_CURLY_BRACKET initializer_list CLOSE_CURLY_BRACKET  */
#line 458 "asgn4_20CS10024_20CS30015.y"
                 { printf("initializer --> { initializer-list }\n"); }
#line 2812 "y.tab.c"
    break;

  case 161: /* initializer: OPEN_CURLY_BRACKET initializer_list COMMA CLOSE_CURLY_BRACKET  */
#line 460 "asgn4_20CS10024_20CS30015.y"
                 { printf("initializer --> { initializer-list , }\n"); }
#line 2818 "y.tab.c"
    break;

  case 162: /* initializer_list: designation_opt initializer  */
#line 464 "asgn4_20CS10024_20CS30015.y"
                      { printf("initializer-list --> designation-opt initializer\n"); }
#line 2824 "y.tab.c"
    break;

  case 163: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 466 "asgn4_20CS10024_20CS30015.y"
                      { printf("initializer-list --> initializer-list , designation-opt initializer\n"); }
#line 2830 "y.tab.c"
    break;

  case 164: /* designation_opt: designation  */
#line 470 "asgn4_20CS10024_20CS30015.y"
                     { printf("designation-opt --> designation\n"); }
#line 2836 "y.tab.c"
    break;

  case 165: /* designation_opt: %empty  */
#line 472 "asgn4_20CS10024_20CS30015.y"
                     { printf("designation-opt --> epsilon\n"); }
#line 2842 "y.tab.c"
    break;

  case 166: /* designation: designator_list ASSIGN  */
#line 476 "asgn4_20CS10024_20CS30015.y"
                 { printf("designation --> designator-list =\n"); }
#line 2848 "y.tab.c"
    break;

  case 167: /* designator_list: designator  */
#line 480 "asgn4_20CS10024_20CS30015.y"
                     { printf("designator-list --> designator\n"); }
#line 2854 "y.tab.c"
    break;

  case 168: /* designator_list: designator_list designator  */
#line 482 "asgn4_20CS10024_20CS30015.y"
                     { printf("designator-list --> designator-list designator\n"); }
#line 2860 "y.tab.c"
    break;

  case 169: /* designator: OPEN_SQUARE_BRACKET constant_expression CLOSE_SQUARE_BRACKET  */
#line 486 "asgn4_20CS10024_20CS30015.y"
                { printf("designator --> [ constant-expression ]\n"); }
#line 2866 "y.tab.c"
    break;

  case 170: /* designator: DOT IDENTIFIER  */
#line 488 "asgn4_20CS10024_20CS30015.y"
                { printf("designator --> . identifier\n"); }
#line 2872 "y.tab.c"
    break;

  case 171: /* statement: labeled_statement  */
#line 492 "asgn4_20CS10024_20CS30015.y"
               { printf("statement --> labeled-statement\n"); }
#line 2878 "y.tab.c"
    break;

  case 172: /* statement: compound_statement  */
#line 494 "asgn4_20CS10024_20CS30015.y"
               { printf("statement --> compound-statement\n"); }
#line 2884 "y.tab.c"
    break;

  case 173: /* statement: expression_statement  */
#line 496 "asgn4_20CS10024_20CS30015.y"
               { printf("statement --> expression-statement\n"); }
#line 2890 "y.tab.c"
    break;

  case 174: /* statement: selection_statement  */
#line 498 "asgn4_20CS10024_20CS30015.y"
               { printf("statement --> selection-statement\n"); }
#line 2896 "y.tab.c"
    break;

  case 175: /* statement: iteration_statement  */
#line 500 "asgn4_20CS10024_20CS30015.y"
               { printf("statement --> iteration-statement\n"); }
#line 2902 "y.tab.c"
    break;

  case 176: /* statement: jump_statement  */
#line 502 "asgn4_20CS10024_20CS30015.y"
               { printf("statement --> jump-statement\n"); }
#line 2908 "y.tab.c"
    break;

  case 177: /* labeled_statement: IDENTIFIER COLON statement  */
#line 506 "asgn4_20CS10024_20CS30015.y"
                       { printf("labeled-statement --> identifier : statement\n"); }
#line 2914 "y.tab.c"
    break;

  case 178: /* labeled_statement: CASE constant_expression COLON statement  */
#line 508 "asgn4_20CS10024_20CS30015.y"
                       { printf("labeled-statement --> case constant-expression : statement\n"); }
#line 2920 "y.tab.c"
    break;

  case 179: /* labeled_statement: DEFAULT COLON statement  */
#line 510 "asgn4_20CS10024_20CS30015.y"
                       { printf("labeled-statement --> default : statement\n"); }
#line 2926 "y.tab.c"
    break;

  case 180: /* compound_statement: OPEN_CURLY_BRACKET block_item_list_opt CLOSE_CURLY_BRACKET  */
#line 514 "asgn4_20CS10024_20CS30015.y"
                        { printf("compound-statement --> { block-item-list-opt }\n"); }
#line 2932 "y.tab.c"
    break;

  case 181: /* block_item_list_opt: block_item_list  */
#line 518 "asgn4_20CS10024_20CS30015.y"
                         { printf("block-item-list-opt --> block-item-list\n"); }
#line 2938 "y.tab.c"
    break;

  case 182: /* block_item_list_opt: %empty  */
#line 520 "asgn4_20CS10024_20CS30015.y"
                         { printf("block-item-list-opt --> epsilon\n"); }
#line 2944 "y.tab.c"
    break;

  case 183: /* block_item_list: block_item  */
#line 524 "asgn4_20CS10024_20CS30015.y"
                     { printf("block-item-list --> block-item\n"); }
#line 2950 "y.tab.c"
    break;

  case 184: /* block_item_list: block_item_list block_item  */
#line 526 "asgn4_20CS10024_20CS30015.y"
                     { printf("block-item-list --> block-item-list block-item\n"); }
#line 2956 "y.tab.c"
    break;

  case 185: /* block_item: declaration  */
#line 530 "asgn4_20CS10024_20CS30015.y"
                { printf("block-item --> declaration\n"); }
#line 2962 "y.tab.c"
    break;

  case 186: /* block_item: statement  */
#line 532 "asgn4_20CS10024_20CS30015.y"
                { printf("block-item --> statement\n"); }
#line 2968 "y.tab.c"
    break;

  case 187: /* expression_statement: expression_opt SEMICOLON  */
#line 536 "asgn4_20CS10024_20CS30015.y"
                          { printf("expression-statement --> expression-opt ;\n"); }
#line 2974 "y.tab.c"
    break;

  case 188: /* expression_opt: expression  */
#line 540 "asgn4_20CS10024_20CS30015.y"
                    { printf("expression-opt --> expression\n"); }
#line 2980 "y.tab.c"
    break;

  case 189: /* expression_opt: %empty  */
#line 542 "asgn4_20CS10024_20CS30015.y"
                    { printf("expression-opt --> epsilon\n"); }
#line 2986 "y.tab.c"
    break;

  case 190: /* selection_statement: IF OPEN_PARENTHESIS expression PARENTHESIS_CLOSE statement  */
#line 546 "asgn4_20CS10024_20CS30015.y"
                         { printf("selection-statement --> if ( expression ) statement\n"); }
#line 2992 "y.tab.c"
    break;

  case 191: /* selection_statement: IF OPEN_PARENTHESIS expression PARENTHESIS_CLOSE statement ELSE statement  */
#line 548 "asgn4_20CS10024_20CS30015.y"
                         { printf("selection-statement --> if ( expression ) statement else statement\n"); }
#line 2998 "y.tab.c"
    break;

  case 192: /* selection_statement: SWITCH OPEN_PARENTHESIS expression PARENTHESIS_CLOSE statement  */
#line 550 "asgn4_20CS10024_20CS30015.y"
                         { printf("selection-statement --> switch ( expression ) statement\n"); }
#line 3004 "y.tab.c"
    break;

  case 193: /* iteration_statement: WHILE OPEN_PARENTHESIS expression PARENTHESIS_CLOSE statement  */
#line 554 "asgn4_20CS10024_20CS30015.y"
                         { printf("iteration-statement --> while ( expression ) statement\n"); }
#line 3010 "y.tab.c"
    break;

  case 194: /* iteration_statement: DO statement WHILE OPEN_PARENTHESIS expression PARENTHESIS_CLOSE SEMICOLON  */
#line 556 "asgn4_20CS10024_20CS30015.y"
                         { printf("iteration-statement --> do statement while ( expression ) ;\n"); }
#line 3016 "y.tab.c"
    break;

  case 195: /* iteration_statement: FOR OPEN_PARENTHESIS expression_opt SEMICOLON expression_opt SEMICOLON expression_opt PARENTHESIS_CLOSE statement  */
#line 558 "asgn4_20CS10024_20CS30015.y"
                         { printf("iteration-statement --> for ( expression-opt ; expression-opt ; expression-opt ) statement\n"); }
#line 3022 "y.tab.c"
    break;

  case 196: /* iteration_statement: FOR OPEN_PARENTHESIS declaration expression_opt SEMICOLON expression_opt PARENTHESIS_CLOSE statement  */
#line 560 "asgn4_20CS10024_20CS30015.y"
                         { printf("iteration-statement --> for ( declaration expression-opt ; expression-opt ) statement\n"); }
#line 3028 "y.tab.c"
    break;

  case 197: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 564 "asgn4_20CS10024_20CS30015.y"
                    { printf("jump-statement --> goto identifier ;\n"); }
#line 3034 "y.tab.c"
    break;

  case 198: /* jump_statement: CONTINUE SEMICOLON  */
#line 566 "asgn4_20CS10024_20CS30015.y"
                    { printf("jump-statement --> continue ;\n"); }
#line 3040 "y.tab.c"
    break;

  case 199: /* jump_statement: BREAK SEMICOLON  */
#line 568 "asgn4_20CS10024_20CS30015.y"
                    { printf("jump-statement --> break ;\n"); }
#line 3046 "y.tab.c"
    break;

  case 200: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 570 "asgn4_20CS10024_20CS30015.y"
                    { printf("jump-statement --> return expression-opt ;\n"); }
#line 3052 "y.tab.c"
    break;

  case 201: /* translation_unit: external_declaration  */
#line 574 "asgn4_20CS10024_20CS30015.y"
                      { printf("translation-unit --> external-declaration\n"); }
#line 3058 "y.tab.c"
    break;

  case 202: /* translation_unit: translation_unit external_declaration  */
#line 576 "asgn4_20CS10024_20CS30015.y"
                      { printf("translation-unit --> translation-unit external-declaration\n"); }
#line 3064 "y.tab.c"
    break;

  case 203: /* external_declaration: function_definition  */
#line 580 "asgn4_20CS10024_20CS30015.y"
                          { printf("external-declaration --> function-definition\n"); }
#line 3070 "y.tab.c"
    break;

  case 204: /* external_declaration: declaration  */
#line 582 "asgn4_20CS10024_20CS30015.y"
                          { printf("external-declaration --> declaration\n"); }
#line 3076 "y.tab.c"
    break;

  case 205: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 586 "asgn4_20CS10024_20CS30015.y"
                         { printf("function-definition --> declaration-specifiers declarator declaration-list-opt compound-statement\n"); }
#line 3082 "y.tab.c"
    break;

  case 206: /* declaration_list_opt: declaration_list  */
#line 590 "asgn4_20CS10024_20CS30015.y"
                          { printf("declaration-list-opt --> declaration-list\n"); }
#line 3088 "y.tab.c"
    break;

  case 207: /* declaration_list_opt: %empty  */
#line 592 "asgn4_20CS10024_20CS30015.y"
                          { printf("declaration-list-opt --> epsilon\n"); }
#line 3094 "y.tab.c"
    break;

  case 208: /* declaration_list: declaration  */
#line 596 "asgn4_20CS10024_20CS30015.y"
                      { printf("declaration-list --> declaration\n"); }
#line 3100 "y.tab.c"
    break;

  case 209: /* declaration_list: declaration_list declaration  */
#line 598 "asgn4_20CS10024_20CS30015.y"
                      { printf("declaration-list --> declaration-list declaration\n"); }
#line 3106 "y.tab.c"
    break;


#line 3110 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 601 "asgn4_20CS10024_20CS30015.y"


void yyerror(char *s) {
    printf("Error occurred: %s\n", s);
    printf("Line no.: %d\n", yylineno);
    printf("Unable to parse: %s\n", yytext);    
}
