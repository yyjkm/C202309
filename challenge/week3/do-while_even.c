#include <stdio.h>

int main()
{
	int i = 0;  // i를 0으로 선언 및 초기화
	do {
		i++;  // i 가 2로 나누어 떨어질때 1씩 더해짐
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello World %d\n", i);  // i 가 홀수일때 출력
	} while (i < 10);  // i 가 10보다 작으면 반복
	return 0;
}