#include <stdio.h>

int main()
{
	int x = 1;  // 정수형 변수 x 선언 및 초기화

	printf("x=%d\n", x++ );  // x 출력 후 +1 (값 1출력, x에 2 저장)
	printf("x=%d\n", x++ );  // x 출력 후 +1 (값 2출력, x에 3 저장)
	printf("x=%d\n", ++x );  // x 에 +1 하고 출력 (값 4출력, x에 4 저장)
	printf("x=%d\n", x-- );  // x 출력 후 -1 (값 4출력, x에 3 저장)
	printf("x=%d\n", x-- );  // x 출력 후 -1 (값 3출력, x에 2 저장)
	printf("x=%d\n", --x );  // x 에 -1 하고 출력 (값 1출력, x에 1 저장)

	return 0;
}