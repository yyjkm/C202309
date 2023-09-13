#include <stdio.h>

int main()
{
	int x = +4;  // 정수형 변수 x에 x + 4 의 값을 저장
	int y = -2;  // 정수형 변수 y에 y - 2 의 값을 저장

	printf("x + (-y) = %d\n", x + (-y));  // (x + 4) 와 -(y + 2) 를 더한 값을 출력
	printf("-x + (+y) = %d\n", -x + (+y));  // -(x + 4) 와 (y - 2) 를 더한 값을 출력

	return 0;
}