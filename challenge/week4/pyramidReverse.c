#include <stdio.h>

int main() {
	int floor;  // 정수형 변수 floor 선언
	printf("몇 층을 쌓겠습니까? (5~100) \n");
	scanf_s("%d", &floor);  // 사용자로부터 floor 변수에 값 입력받기

	for (int i = floor; i > 0; i--) {
		for (int j = 0; j < floor - i; j++) {
			printf("S");
		}  //  j 값이 floor - i 일때 S 출력 반복
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}  //  k 값이 i * 2 -1 일때 *출력 반복
		printf("\n");
	}  //  i 값이 양수일 때 반복
}