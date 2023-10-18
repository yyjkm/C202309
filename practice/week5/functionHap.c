#include <stdio.h>

int hapf(int value);  // hapf 함수 원형 선언

int main()  // hapf 함수 호출
{
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));

	return 0;
}

int hapf(int value)  // hapf 함수 정의
{
	int i = 1;
	int hap = 0;

	while (i <= value) {  // i가 매개변수 value 보다 작거나 같을때 반복
		hap = hap + i;  // 조건이 성립할때 변수 hap 이 변수 i를 더한 값만큼 증가
		i++;  // 후에 변수 i 에 1을 더함
	}
	return hap;  // 함수가 끝나면 변수 hap 을 반환
}