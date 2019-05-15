/*	Definition section */
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex
extern char buf[256];  // Get current code line from lex

/* Symbol table function - you can add new function if needed. */
void yyerror(char*);
int lookup_symbol(char*);
void create_symbol();
void insert_symbol(char*, char*, char*, int);
void dump_symbol();

struct symbolTableStruct {
    char name[64];
    char entryType[16];
    char dataType[16];
    int scopeLevel;
    int formalParameters[10];
};

struct symbolTableStruct symbolTable[30];
int currentIndex;
    
%}

/* Use variable or self-defined structure to represent
 * nonterminal and token type
 */
%union {
    int i_val;
    double f_val;
    char* string;
    int b_val;
    int v_val;
}

/* Token without return */
%token PRINT
%token ID SEMICOLON
%token ADD SUB MUL DIV MOD INC DEC
%token MT LT MTE LTE EQ NE
%token ASGN ADDASGN SUBASGN MULASGN DIVASGN MODASGN
%token AND OR NOT 
%token LB RB LCB RCB LSB RSB COMMA
%token IF ELSE FOR WHILE


/* Token with return, which need to sepcify type */
%token <i_val> I_CONST
%token <f_val> F_CONST
%token <string> INT FLOAT BOOL STRING VOID TR FA RET



/* Nonterminal with return, which need to sepcify type */
%type <f_val> stat
//%type <string> type

/* Yacc will start at this nonterminal */
%start program

/* Grammar section */
%%

program
    :program stat
    |stat
;

stat
    :F_CONST
;


%%

/* C code section */
int main(int argc, char** argv)
{
    yylineno = 0;
    
    create_symbol();

    yyparse();
	printf("\nTotal lines: %d \n",yylineno);

    return 0;
}

void yyerror(char *s)
{
    printf("\n|-----------------------------------------------|\n");
    printf("| Error found in line %d: %s\n", yylineno, buf);
    printf("| %s", s);
    printf("\n|-----------------------------------------------|\n\n");
}

void create_symbol() {
	currentIndex = -1;
	for(int i=0; i<30; i++) {
		strcpy(symbolTable[i].name, "\0");
		strcpy(symbolTable[i].entryType, "\0");
		strcpy(symbolTable[i].dataType, "\0");
		symbolTable[i].scopeLevel = -1;
		for(int j=0; j<10; j++) symbolTable[i].formalParameters[j] = -1;
		}
}

void insert_symbol(char *insertName, char *insertEntryType, char *insertDataType, int insertScopeLevel) {
	if(lookup_symbol(insertName) == 0) {
		currentIndex = currentIndex + 1;
		strcpy(symbolTable[currentIndex].name, insertName);
		strcpy(symbolTable[currentIndex].entryType, insertEntryType);
		strcpy(symbolTable[currentIndex].dataType, insertDataType);
		symbolTable[currentIndex].scopeLevel = insertScopeLevel;
		// not finished yet
	}
	else {
		// semantic error 
	}
}

int lookup_symbol(char *lookupName) {
	int same = 0;
	for(int i=0; i<30; i++) {
		if(strcmp(symbolTable[i].name, lookupName) == 1) {
			same = 1;
			break;
			}
		}
	return same;
}

void dump_symbol() {
	if(currentIndex == -1) return;

    printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n\n",
           "Index", "Name", "Kind", "Type", "Scope", "Attribute");

	for(int i=0; i<=currentIndex; i++) {
		printf("%-10d%-10s%-12s%-10s%-10d", i, symbolTable[i].name, symbolTable[i].entryType, symbolTable[i].dataType, symbolTable[i].scopeLevel);
		int j=0;
		while(symbolTable[i].formalParameters[j] != 0 && j<10) {
			if(j != 0) printf(", ");
			if(symbolTable[i].formalParameters[j] == 1) printf("int");
			else if(symbolTable[i].formalParameters[j] == 2) printf("float");
			else if(symbolTable[i].formalParameters[j] == 3) printf("string");
			else if(symbolTable[i].formalParameters[j] == 4) printf("bool");
			else if(symbolTable[i].formalParameters[j] == 5) printf("void");
			j = j + 1;
			}
		}
	create_symbol();
}
