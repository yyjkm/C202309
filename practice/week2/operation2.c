#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;

	z = (x + y) * (x - y);  // x와 y를 더한 값과 x에서 y를 뺀 값을 곱해 z에 저장 
	printf("z = (x + y) * (x - y) = %d\n", z);

	z = (x * y) + (x / y);  // x와 y를 곱한 값과 x를 y로 나눈 값을 더해 z에 저장
	printf("z = (x * y) + (x / y) = %d\n", z);

	z = x + y + 2004;  // x와 y와 2004를 더한 값을 z에 저장
	printf("z = x + y + 2004 = %d\n", z);

	return 0;
}