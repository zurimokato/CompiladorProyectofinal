/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMERAL = 258,
    ESCRIBA = 259,
    LEER = 260,
    INCLUDE = 261,
    LIBRERIA = 262,
    MAIN = 263,
    A_PARENTESIS = 264,
    C_PARENTESIS = 265,
    A_LLAVE = 266,
    C_LLAVE = 267,
    A_CORCHETE = 268,
    C_CORCHETE = 269,
    IF = 270,
    ELSE = 271,
    WHILE = 272,
    FOR = 273,
    OPERADOR = 274,
    INCREMENTO = 275,
    DECREMENTO = 276,
    MENOR_Q = 277,
    MAYOR_Q = 278,
    MENORIGUAL = 279,
    MAYORIGUAL = 280,
    IGUAL = 281,
    DIFERENTE = 282,
    ASIGNADOR = 283,
    DIGITO = 284,
    CADENA = 285,
    TIPO_DATO = 286,
    FINALIZAR_SENTENCIA = 287,
    ELSEIF = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
