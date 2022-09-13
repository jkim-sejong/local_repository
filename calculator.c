

/***********************************************************************
* FILENAME :        calculation.c
*
* DESCRIPTION :
*       �� ������ �Է¹޾Ƽ� ���������� ����ϴ� ���α׷�
*
* PUBLIC FUNCTIONS :
*       None
*
* NOTES :
*       ���α׷��� ������ ���� ���� �ڵ���
*       �Լ��� ������� �ʰ� ���������� ����ϴ� ���α׷� ��
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
* DESCRIPTION :     �� ������ ���� ���ϴ� �Լ�
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
* DESCRIPTION :     �� ������ ���� ���ϴ� �Լ�
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
* DESCRIPTION :     �� ������ ���� ���ϴ� �Լ�
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
* DESCRIPTION :     �� ������ �������� ���ϴ� �Լ�
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
* DESCRIPTION :     �� ������ ���������� ����Ͽ� ȭ�鿡 ����ϴ� ���α׷��� main �Լ�
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
* NOTES : C ���α׷��� ������
*
*/
int main(void)
{
	/* �� ���α׷����� ����� �����鿡 ���� define �κ�
	 * ���������� ������ ���� �� ������� ������ ������ ���� 
	 */ 
	int x;						// ù ��° ������ ������ ���� 
	int y;						// �� ��° ������ ������ ���� 
	int sum, diff, mul, div;	
	
	/*
	x = 20;		// ���� x�� 2�� ����	
	y = 10;		// ���� y�� 10�� ����
	*/

	/*-------����ڷκ��� �Է��� �޴� �κ� ---------------------------------------*/
	printf("ù��° ������ �Է��Ͻÿ�: ");	
	scanf("%d", &x);				
	printf("�ι�° ������ �Է��Ͻÿ�: ");	
	scanf("%d", &y);					

	/*------ �Է¹��� �μ��� ���������� ����ϴ� �κ� ---------------------------*/
	sum  = sum_function(x, y);		
	diff = diff_function(x, y);		
	mul  = mul_function(x, y);		
	div  = div_function(x, y);		

	/*------ ����� ȭ�鿡 ����ϴ� �κ� --------------------------------------*/
	printf("�μ��� ��: %d\n", sum);		
	printf("�μ��� ��: %d\n", diff);
	printf("�μ��� ��: %d\n", mul);		
	printf("�μ��� ��: %d\n", div);		

	return 0;
}