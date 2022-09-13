/***********************************************************************
* FILENAME :        calculator_simple.c
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
* AUTHOR :    Jaeho Kim (kimjh@sejong.ac.kr) 
*
* HISTORY :
* 		1 Sep 2021 : Created
* 		7 Sep 2022 : Updated : float ������ ��� �߰�
*/

#include <stdio.h>

int main(void)
{
	int first_var, second_var;
	int sum, diff, mul, div_int;
	double div_float;

	/* ���� �Է� ���� */
	printf("ù��° ������ �Է��Ͻÿ�: ");	
	scanf("%d", &first_var);		  // ����ڷκ��� ù��° �����Է�
	printf("�ι�° ������ �Է��Ͻÿ�: ");	
	scanf("%d", &second_var); 		  // ����ڷκ��� ù��° �����Է�
	
	/* ������ ���� ��Ģ������ ���� */
	sum =  first_var + second_var; 
	diff =  first_var - second_var; 
	mul =  first_var * second_var; 

	// [ToDo] �ι�° ������ 0�� �ԷµǸ� ��Ÿ�� ���� �߻�: ó�� �ʿ� 
	div_int =  first_var / second_var; 
	div_float =  (float)first_var / (float)second_var; 

	/* ���� ��� ���� */
	printf("\n");
	printf("�μ��� ��: %4d\n", sum);
	printf("�μ��� ��: %4d\n", diff);
	printf("�μ��� ��: %4d\n", mul);
	printf("�μ��� ���� ������: %4d\n", div_int);
	printf("�μ��� �Ǽ� ������: %6.2f\n", div_float);

	return 0; 
}
