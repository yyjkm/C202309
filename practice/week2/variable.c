#include <stdio.h>

int main()
{
	int x;  // 변수명이 x인 정수형 변수 선언
	int y;  // 변수명이 y인 정수형 변수 선언
	int z;  // 변수명이 z인 정수형 변수 선언

	x = 1;  // x에 1의 값을 초기화
	y = 2;  // y에 2의 값을 초기화

	z = x + y;  // x 와 y를 더한 결과 값을 z에 초기화

	printf("%d", z);  // 정수 z값을 출력

	return 0;
}