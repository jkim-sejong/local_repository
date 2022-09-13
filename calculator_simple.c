/***********************************************************************
* FILENAME :        calculator_simple.c
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
* AUTHOR :    Jaeho Kim (kimjh@sejong.ac.kr) 
*
* HISTORY :
* 		1 Sep 2021 : Created
* 		7 Sep 2022 : Updated : float 나눗샘 기능 추가
*/

#include <stdio.h>

int main(void)
{
	int first_var, second_var;
	int sum, diff, mul, div_int;
	double div_float;

	/* 계산기 입력 수행 */
	printf("첫번째 정수를 입력하시오: ");	
	scanf("%d", &first_var);		  // 사용자로부터 첫번째 정수입력
	printf("두번째 정수를 입력하시오: ");	
	scanf("%d", &second_var); 		  // 사용자로부터 첫번째 정수입력
	
	/* 정수에 대한 사칙연산을 수행 */
	sum =  first_var + second_var; 
	diff =  first_var - second_var; 
	mul =  first_var * second_var; 

	// [ToDo] 두번째 정수가 0이 입력되면 런타임 오류 발생: 처리 필요 
	div_int =  first_var / second_var; 
	div_float =  (float)first_var / (float)second_var; 

	/* 계산기 출력 수행 */
	printf("\n");
	printf("두수의 합: %4d\n", sum);
	printf("두수의 차: %4d\n", diff);
	printf("두수의 곱: %4d\n", mul);
	printf("두수의 정수 나누기: %4d\n", div_int);
	printf("두수의 실수 나누기: %6.2f\n", div_float);

	return 0; 
}
