#include <stdio.h>

int main()
{
	int i = -1;  // i 를 -1 로 선언 및 초기화
	while (i < 10) {
		i++;  // i가 2로 나누어 떨어질때 1씩 더해짐
		if (i % 2 == 0) {
			continue;
		}  // i가 10보다 작으면 반복
		printf("%d Hello World! \n", i);  // i가 홀수일때 출력
	}
	return 0;
}