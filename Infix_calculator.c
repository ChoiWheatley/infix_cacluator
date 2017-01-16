/*
 * 
 * 이 프로그램은 Infix 수식을 계산하는 프로그램입니다.
 * 기능 : 사칙연산. 괄호연산은 아직 포함안함.
 * 제작자 : 최승현
 *
 */



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_FORMULA_LENGTH 200

//operand는 피연산자로 숫자여야한다.
//operator는 연산자로 문자여야 한다.
union operand_operator{
	double operand;
	char operator;
};

typedef struct _stack{
	union operand_operator opera;
	struct _node *Next;
}_stack;

typedef struct _list{
	int size;
	struct _stack* HEAD;
	struct _stack* END;
}_list;

void init(_list* link_pointer);
void push (double number, _list* link_pointer);
double pop (_list* link_pointer);
int empty (_list link);

double addition (double number1, double number2);
double substraction (double number1, double number2);
double multiplication (double number1, double number2);
double division (double number1, double number2);

int main(void)
{


	return 0;
}




void init(_list* link_pointer)
{
}

void push (double number, _list* link_pointer)
{
}

double pop (_list* link_pointer)
{
}

int empty (_list link)
{
}


double addition (double number1, double number2)
{
}

double substraction (double number1, double number2)
{
}

double multiplication (double number1, double number2)
{
}

double division (double number1, double number2)
{
}




















