

/***********************************************************************
* FILENAME :        calculation.c
*
* DESCRIPTION :
*       두 정수를 입력받아서 가감승제를 계산하는 프로그램
*
* PUBLIC FUNCTIONS :
*       None
*
* NOTES :
*       프로그래밍 수업을 위한 예제 코드임
*       함수를 사용하지 않고 가감승제를 출력하는 프로그램 예
*
*       Copyright - BSD License (3-Clause)
*
* AUTHOR :    Jaeho Kim (kimjh@sejong.ac.kr)        START DATE :    1 Sep 2020
*
* CHANGES :
* REF NO  VERSION DATE    WHO     DETAIL
* F21/33  A.03.04 05Sep20 JH      Function added
*
*/

//#pragma warning(disable:4996)
#include <stdio.h>

/*******************************************************************
* NAME :            int sum_function(int x, int y)
*
* DESCRIPTION :     두 정수의 합을 구하는 함수
*
* INPUTS :
*       PARAMETERS:
*           int		x		                -> the first number
*			int		y						-> the second number
* OUTPUTS :
*       RETURN :
*            Type:   int
*            Values: sum of two numbers
*
* NOTES :
*
*/
int sum_function(int x, int y)
{
	return x + y;
}

/*******************************************************************
* NAME :            int diff_function(int x, int y)
*
* DESCRIPTION :     두 정수의 차를 구하는 함수
*
* INPUTS :
*       PARAMETERS:
*           int		x		                -> the first number
*			int		y						-> the second number
* OUTPUTS :
*       RETURN :
*            Type:   int
*            Values: difference of two numbers
*
* NOTES :
*
*/
int diff_function(int x, int y)
{
	return x - y;
}

/*******************************************************************
* NAME :            int mul_function(int x, int y)
*
* DESCRIPTION :     두 정수의 곱을 구하는 함수
*
* INPUTS :
*       PARAMETERS:
*           int		x		                -> the first number
*			int		y						-> the second number
* OUTPUTS :
*       RETURN :
*            Type:   int
*            Values: multiplication of two numbers
*
* NOTES :
*
*/
int mul_function(int x, int y)
{
	return x * y;
}

/*******************************************************************
* NAME :            int mul_function(int x, int y)
*
* DESCRIPTION :     두 정수의 나눗셈을 구하는 함수
*
* INPUTS :
*       PARAMETERS:
*           int		x		                -> the first number
*			int		y						-> the second number
* OUTPUTS :
*       RETURN :
*            Type:   int                   
*            Values: division of two numbers
*
* NOTES :
*
*/
int div_function(int x, int y)
{
	return x / y;
}

/*******************************************************************
* NAME :            int main(void)
*
* DESCRIPTION :     두 정수의 가감승제를 계산하여 화면에 출력하는 프로그램의 main 함수
*
* INPUTS :
*       None
* 
* OUTPUTS :
*       RETURN :
*            Type:   int		error_code
*            Values: 0			sucess 
*					others	 	error
*
* NOTES : C 프로그래밍 수업용
*
*/
int main(void)
{
	/* 본 프로그램에서 사용할 변수들에 대한 define 부분
	 * 가감승제를 수행할 변수 와 결과값을 저장할 변수를 정의 
	 */ 
	int x;						// 첫 번째 정수를 저장할 변수 
	int y;						// 두 번째 정수를 저장할 변수 
	int sum, diff, mul, div;	
	
	/*
	x = 20;		// 변수 x에 2을 저장	
	y = 10;		// 변수 y에 10을 저장
	*/

	/*-------사용자로부터 입력을 받는 부분 ---------------------------------------*/
	printf("첫번째 정수를 입력하시오: ");	
	scanf("%d", &x);				
	printf("두번째 정수를 입력하시오: ");	
	scanf("%d", &y);					

	/*------ 입력받은 두수의 가감승제를 계산하는 부분 ---------------------------*/
	sum  = sum_function(x, y);		
	diff = diff_function(x, y);		
	mul  = mul_function(x, y);		
	div  = div_function(x, y);		

	/*------ 결과를 화면에 출력하는 부분 --------------------------------------*/
	printf("두수의 합: %d\n", sum);		
	printf("두수의 차: %d\n", diff);
	printf("두수의 곱: %d\n", mul);		
	printf("두수의 몫: %d\n", div);		

	return 0;
}