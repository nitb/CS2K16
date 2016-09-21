//yacc -d gram.y
//flex gram.l
//cc lex.yy.c y.tab.c
//./a.out
//example: 2+6*2-5/3 --> output: 262*+53/-

%{
#include<stdio.h>
%}
%token NUM
%left '+' '-'
%left '*' '/'
%right NEGATIVE
%%
S:  E {printf("\n");}
    ;
E:  E '+' E {printf("+");}
    |   E '*' E {printf("*");}
    |   E '-' E {printf("-");}
    |   E '/' E {printf("/");}
    |   '(' E ')'
    |   '-' E %prec NEGATIVE {printf("-");}
    |   NUM     {printf("%d", yylval);}
    ;
%%

int main(){
    yyparse();
}

int yyerror (char *msg) {
    return printf ("error YACC: %s\n", msg);
}
