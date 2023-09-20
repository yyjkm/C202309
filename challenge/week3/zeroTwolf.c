#include <stdio.h>

int main() {
	int num;  // 정수형 변수 num 선언
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);  // scanf 함수로 num에 값을 입력
	if (num == 0) {
		printf("zero");
	}  // num 값이 0일 경우 출력
	else if (num == 1) {
		printf("one");
	}  // num 값이 1일 경우 출력
	else if (num == 2) {
		printf("two");
	}  // num 값이 2일 경우 출력
	else {
		printf("not 0 ~ 2");
	}  // num 값이 0~2 이외의 값일 경우 출력
	return 0;
}