#include <stdio.h>

int main()
{
	int x = 4;  // 정수형 변수 x 선언 및 초기화
	int y = 2;  // 정수형 변수 y 선언 및 초기화
	int z;  // 정수형 변수 z 선언

	z = x + y;  // x와 y를 더한 결과 값을 z에 초기화
	printf("z = x + y = %d\n", z);
	z = x - y;  // x에서  를 뺀 결과 값을 z에 초기화 
	printf("z = x - y = %d\n", z);
	z = x * y;  // x와 y를 곱한 결과 값을 z에 초기화
	printf("z = x * y = %d\n", z);
	z = x / y;  // x를 y로 나눈 결과 값을 z에 초기화 
	printf("z = x / y = %d\n", z);

	return 0;
}