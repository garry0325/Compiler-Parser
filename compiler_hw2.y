/*	Definition section */
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex
extern char buf[256];  // Get current code line from lex
extern int error;


/* Symbol table function - you can add new function if needed. */
void yyerror(char*);
int lookup_symbol(char*, int);
void create_symbol(int);
void insert_symbol(char*, char*, char*, int, int, char*);
void dump_symbol(int);

char name[64];
char entryType[16];
char dataType[16];
extern int scopeLevel;


struct symbolTableStruct {
    char name[64];
    char entryType[16];
    char dataType[16];
    int scopeLevel;
    char formalParameters[64];
};

struct symbolTableStruct symbolTable[30];
int currentIndex;
int formalPIndex;
char errorMessage[64];


    
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
%token ADDASGN SUBASGN MULASGN DIVASGN MODASGN
%token AND OR NOT 
%token LB RB LCB RCB LSB RSB COMMA
%token IF ELSE FOR WHILE
%token C_COMMENT CPP_COMMENT


/* Token with return, which need to sepcify type */
%token <i_val> I_CONST
%token <f_val> F_CONST
%token <string> S_CONST
%token <string> INT FLOAT BOOL STRING VOID TR FA RET
%token <string> ID ASGN



/* Nonterminal with return, which need to sepcify type */
//%type <f_val> stat
%type <string> type
//%type <string> declarator

/* Yacc will start at this nonterminal */
%start program

/* Grammar section */
%%

primary_expression  // not copied intactly
    : ID {
    	if(lookup_symbol($1, -2) == 0) {
    		strcpy(errorMessage, "\0");
    		strcpy(errorMessage, "Undeclared variable ");
    		strcat(errorMessage, $1);
    		yyerror(errorMessage);
    		}
    	}
    | constant
    | LB expression RB
;

constant  // not copied intactly
    : I_CONST
    | F_CONST
	| S_CONST
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
    //: declaration_specifiers SEMICOLON // int
    : declaration_specifiers ID SEMICOLON {  // meet regular declaration
    	insert_symbol($2, "variable", dataType, scopeLevel, 0, NULL);
    	strcpy(name, "\0");
    	strcpy(dataType, "\0");
		}
	| declaration_specifiers ID ASGN assignment_expression SEMICOLON {  // meet regular declaration
    	insert_symbol($2, "variable", dataType, scopeLevel, 0, NULL);
    	strcpy(name, "\0");
    	strcpy(dataType, "\0");
		}
	;

declaration_specifiers
    : type declaration_specifiers
    | type
;

type
	: INT		{ strcpy(dataType, $1); }
	| FLOAT		{ strcpy(dataType, $1); }
	| STRING	{ strcpy(dataType, $1); }
	| BOOL		{ strcpy(dataType, $1); }
	| VOID		{ strcpy(dataType, $1); }
;


declarator  // (direct_declarator) not copied intactly
    : ID {
    	insert_symbol($1, "function", dataType, -3, 0, NULL);
    	strcpy(dataType, "\0");
    	formalPIndex = currentIndex;
    }
    | LB declarator RB
    | declarator LB parameter_list RB
    | declarator LB RB
    //| funcName LB identifier_list RB
;

parameter_list // ()
    : parameter_declaration
    | parameter_list COMMA parameter_declaration
;

parameter_declaration // not copied intactly
    : declaration_specifiers ID {
    	insert_symbol($2, "parameter", dataType, 1, 0, NULL);
    	insert_symbol(NULL, NULL, NULL, -1, 1, dataType);
    	strcpy(name, "\0");
    	strcpy(dataType, "\0");
    	}
    | declaration_specifiers
;

statement  // canceled labeled_statement
    : compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
	| print_statement
	| function_statement_semicolon
;

compound_statement
    : LCB RCB
    | LCB block_item_list RCB {
	dump_symbol(scopeLevel+1);
	}
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

function_statement_semicolon
	: function_statement SEMICOLON
;

function_statement
	: ID LB expression RB {
		if(lookup_symbol($1, -3) == 0) {
			strcpy(errorMessage, "\0");
			strcpy(errorMessage, "Undeclared function ");
			strcat(errorMessage, $1);
			yyerror(errorMessage);
			}
		}
	| ID LB RB {
		if(lookup_symbol($1, -3) == 0) {
			strcpy(errorMessage, "\0");
			strcpy(errorMessage, "Undeclared function ");
			strcat(errorMessage, $1);
			yyerror(errorMessage);
			}
		}
;

program
    : external_declaration
    | program external_declaration
;

external_declaration
    : function_definition {  }
    | declaration
;

function_definition
    //: declaration_specifiers declarator declaration_list compound_statement
    : declaration_specifiers declarator compound_statement {
    	//dump_symbol(scopeLevel);
    	}
;


%%

/* C code section */
int main(int argc, char** argv)
{   
	error = 0;
	yylineno = 1;
	printf("%d: ", yylineno);
	
	scopeLevel = 0;
	
	currentIndex = -1;
	formalPIndex = -1;
    create_symbol(0);

	int result;
	result = yyparse();
	if(!result) {
		dump_symbol(0);
		printf("\n\nTotal lines: %d \n", yylineno);
		}
    return 0;
}

void yyerror(char *s)
{
    printf("\n\n|-----------------------------------------------|\n");
    printf("| Error found in line %d: %s\n", yylineno, buf);
    printf("| %s", s);
    printf("\n|-----------------------------------------------|\n");
    error = 1;
}

void create_symbol(int head) {
	for(int i=head; i<30; i++) {
		strcpy(symbolTable[i].name, "\0");
		strcpy(symbolTable[i].entryType, "\0");
		strcpy(symbolTable[i].dataType, "\0");
		symbolTable[i].scopeLevel = -1;
		strcpy(symbolTable[i].formalParameters, "\0");
		}
}

void insert_symbol(char *insertName, char *insertEntryType, char *insertDataType, int insertScopeLevel, int addFunctionParameter, char *parameter) {
	if(addFunctionParameter) {
		if(strlen(symbolTable[formalPIndex].formalParameters) == 0) {
			strcpy(symbolTable[formalPIndex].formalParameters, parameter);
			}
		else {
			strcat(symbolTable[formalPIndex].formalParameters, ", ");
			strcat(symbolTable[formalPIndex].formalParameters, parameter);
			}
		}
	else {
		int result = lookup_symbol(insertName, insertScopeLevel);
		if(result == 0) {
			currentIndex = currentIndex + 1;
			strcpy(symbolTable[currentIndex].name, insertName);
			strcpy(symbolTable[currentIndex].entryType, insertEntryType);
			strcpy(symbolTable[currentIndex].dataType, insertDataType);
			if(insertScopeLevel == -3) insertScopeLevel = 0;
			symbolTable[currentIndex].scopeLevel = insertScopeLevel;
			}
		else if(result == 1) {
			strcpy(errorMessage, "\0");
			strcat(errorMessage, "Redeclared variable ");
			strcat(errorMessage, insertName);
			yyerror(errorMessage);
			}
		else if(result == 2) {
			strcpy(errorMessage, "\0");
			strcat(errorMessage, "Redeclared function ");
			strcat(errorMessage, insertName);
			yyerror(errorMessage);
			}
		else if(result == 3) {
			strcpy(errorMessage, "\0");
			strcat(errorMessage, "Variable declared with name ");
			strcat(errorMessage, insertName);
			yyerror(errorMessage);
			}
		else if(result == 4) {
			strcpy(errorMessage, "\0");
			strcat(errorMessage, "Function declared with name ");
			strcat(errorMessage, insertName);
			yyerror(errorMessage);
			}
		}
}

int lookup_symbol(char *lookupName, int lookupScopeLevel) {
	int same = 0;
	if(lookupScopeLevel == -3) {	// function name looks for function or variable names
		for(int i=0; i<30; i++) {
			if(strcmp(symbolTable[i].name, lookupName) == 0) {
				if(strcmp(symbolTable[i].entryType, "function") == 0)
					same = 2;	// function name meets same function name
				else if(strcmp(symbolTable[i].entryType, "variable") == 0)
					same = 3;	// function name meets same variable name
				break;
				}
			}
		}
	else {	
		for(int i=0; i<30; i++) {
			if(strcmp(symbolTable[i].name, lookupName) == 0 && strcmp(symbolTable[i].entryType, "function") == 0 && lookupScopeLevel == 0) {
				same = 4;
				break;
				}
			if(strcmp(symbolTable[i].name, lookupName) == 0 && (symbolTable[i].scopeLevel == lookupScopeLevel || lookupScopeLevel == -2)) {
				same = 1;	// for redeclared variable name
				break;
				}
			}
		}
	return same;
}

void dump_symbol(int scope) {
	int startFrom=-1;
	for(int i=0; i<=currentIndex; i++) {
		if(symbolTable[i].scopeLevel == scope) {
			startFrom = i;
			break;
			}
		}
	if(startFrom == -1) return;

    printf("\n\n%-10s%-10s%-12s%-10s%-10s%-10s\n\n",
           "Index", "Name", "Kind", "Type", "Scope", "Attribute");

	for(int i=startFrom; symbolTable[i].scopeLevel == scope; i++) {
		printf("%-10d%-10s%-12s%-10s%-10d%-10s\n", i - startFrom, symbolTable[i].name, symbolTable[i].entryType, symbolTable[i].dataType, symbolTable[i].scopeLevel, symbolTable[i].formalParameters);
		currentIndex = currentIndex - 1;
		
		}
	create_symbol(startFrom);
}
