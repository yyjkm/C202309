#include <stdio.h>

long multiF(int value);  // multiF 함수 원형 선언

void main()  // multiF 함수 호출
{
	printf("1부터 2까지의 곱은 %d\n", multiF(2));
	printf("1부터 3까지의 곱은 %d\n", multiF(3));
	printf("1부터 5까지의 곱은 %d\n", multiF(5));
}

long multiF(int value)  // multiF 함수 정의
{
	int i = 1;
	long multi = 1;

	while (i <= value) {  // i 가 매개변수 value 보다 작거나 같을때 반복
		multi = i * multi;  // 조건이 성립할때 변수 multi 가 변수 i를 곱한 값만큼 증가
		i++;  // 후에 i 에 1을 더함
	}
	return multi;  // 함수가 끝나면 변수 multi 값을 반환
}