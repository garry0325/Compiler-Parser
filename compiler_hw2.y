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
%token SEMICOLON
%token ADD SUB MUL DIV MOD INC DEC
%token MT LT MTE LTE EQ NE
%token ASGN ADDASGN SUBASGN MULASGN DIVASGN MODASGN
%token AND OR NOT 
%token LB RB LCB RCB LSB RSB COMMA
%token IF ELSE FOR WHILE
%token C_COMMENT CPP_COMMENT


/* Token with return, which need to sepcify type */
%token <i_val> I_CONST
%token <f_val> F_CONST
%token <string> S_CONST
%token <string> INT FLOAT BOOL STRING VOID TR FA RET
%token <string> ID



/* Nonterminal with return, which need to sepcify type */
//%type <f_val> stat
%type <string> type

/* Yacc will start at this nonterminal */
%start program

/* Grammar section */
%%

primary_expression  // not copied intactly
    : ID {  }
    | constant
    | LB expression RB
;

constant  // not copied intactly
    : I_CONST {  }
    | F_CONST {  }
	| S_CONST {  }
	| TR
	| FA
;


postfix_expression  // not copied intactly
    : primary_expression
    | postfix_expression LSB expression RSB
    | postfix_expression LB RB
    | postfix_expression LB argument_expression_list RB
    | postfix_expression INC
    | postfix_expression DEC
;

argument_expression_list
    : assignment_expression
    | argument_expression_list COMMA assignment_expression
;

unary_expression
    : postfix_expression
    | INC unary_expression
    | DEC unary_expression
    | unary_operator cast_expression
;

unary_operator
    : '&'
    | MUL
    | ADD
    | SUB
    | '~'
    | '!'
;

cast_expression  // not copied intactly
    : unary_expression
;

multiplicative_expression
    : cast_expression
    | multiplicative_expression MUL cast_expression
    | multiplicative_expression DIV cast_expression
    | multiplicative_expression MOD cast_expression
;

additive_expression
    : multiplicative_expression
    | additive_expression ADD multiplicative_expression
    | additive_expression SUB multiplicative_expression
;

shift_expression
    : additive_expression
;

relational_expression
    : shift_expression
    | relational_expression LT shift_expression
    | relational_expression MT shift_expression
    | relational_expression LTE shift_expression
    | relational_expression MTE shift_expression
;

equality_expression
    : relational_expression
    | equality_expression EQ relational_expression
    | equality_expression NE relational_expression
;

and_expression
    : equality_expression
    | and_expression '&' equality_expression
;

exclusive_or_expression
    : and_expression
    | exclusive_or_expression '^' and_expression
;

inclusive_or_expression
    : exclusive_or_expression
    | inclusive_or_expression '|' exclusive_or_expression
;

logical_and_expression
    : inclusive_or_expression
    | logical_and_expression AND inclusive_or_expression
;

logical_or_expression
    : logical_and_expression
    | logical_or_expression OR logical_and_expression
;

conditional_expression
    : logical_or_expression
    | logical_or_expression '?' expression ':' conditional_expression
;

assignment_expression
    : conditional_expression
    | unary_expression assignment_operator assignment_expression
;

assignment_operator
    : ASGN
    | MULASGN
    | DIVASGN
    | MODASGN
    | ADDASGN
    | SUBASGN
;

expression
    : assignment_expression
    | expression COMMA assignment_expression
;

declaration
    : declaration_specifiers SEMICOLON
    | declaration_specifiers init_declarator_list SEMICOLON
    ;

declaration_specifiers
    : type declaration_specifiers
    | type
;

type
	: INT		{ $$ = $1; }
	| FLOAT		{ $$ = $1; }
	| STRING	{ $$ = $1; }
	| BOOL		{ $$ = $1; }
	| VOID		{ $$ = $1; }
;

init_declarator_list
    : init_declarator
    | init_declarator_list COMMA init_declarator
;

init_declarator
    : declarator ASGN assignment_expression
    | declarator
;

declarator  // (direct_declarator) not copied intactly
    : ID
    | LB declarator RB
    | declarator LB parameter_list RB
    | declarator LB RB
    | declarator LB identifier_list RB
;

parameter_list // ()
    : parameter_declaration
    | parameter_list COMMA parameter_declaration
;

parameter_declaration // not copied intactly
    : declaration_specifiers declarator
    | declaration_specifiers
;

identifier_list
    : ID
    | identifier_list COMMA ID
;

statement  // canceled labeled_statement
    : compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
	| print_statement
	| function_statement
;

compound_statement
    : LCB RCB
    | LCB block_item_list RCB
;

block_item_list
    : block_item
    | block_item_list block_item
;

block_item
    : declaration
    | statement
;

expression_statement
    : SEMICOLON
    | expression SEMICOLON
;

selection_statement
    : IF LB expression RB statement ELSE statement
    | IF LB expression RB statement
;

iteration_statement
    : WHILE LB expression RB statement
    | FOR LB expression_statement expression_statement RB statement
    | FOR LB expression_statement expression_statement expression RB statement
    | FOR LB declaration expression_statement RB statement
    | FOR LB declaration expression_statement expression RB statement
;

jump_statement // canceled CONTINUE & BREAK
    : RET SEMICOLON
    | RET expression SEMICOLON
;

print_statement
	: PRINT LB primary_expression RB SEMICOLON
;

function_statement
	: ID LB expression RB SEMICOLON
	| ID LB RB SEMICOLON
;

program
    : external_declaration
    | program external_declaration
;

external_declaration
    : function_definition
    | declaration
;

function_definition
    //: declaration_specifiers declarator declaration_list compound_statement
    : declaration_specifiers declarator compound_statement
;


%%

/* C code section */
int main(int argc, char** argv)
{   
	yylineno = 1;
	printf("%d: ", yylineno);

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
		// formal parameters not finished yet
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
