#include <stdio.h>

#define  X  1  // 값이 1인 상수 X 선언
#define  PI 3.141592  // 값이 3.141592인 상수 PI 선언

int main()
{
	double z;  // 변수명이 z인 실수형 변수 선언

	z = X + PI;  // X 와 PI를 더한 결과 값을 z에 초기화

	printf("%f", z);  // 실수 z값을 출력

	return 0;
}