#include <stdio.h>

int main() {
	int choice;  // 정수형 변수 choice 선언

	printf("1. 파일저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);  // scanf 함수로 choice에 값을 입력

	if (choice == 1) {
		printf("파일을 저장합니다.");
	}  // choice 값이 1일 경우 출력
	else if(choice == 2) {
		printf("저장 없이 닫습니다.");
	}  // choice 값이 2일 경우 출력
	else if (choice == 3) {
		printf("종료합니다.");
	}  // choice 값이 3일 경우 출력
	else {
		printf("잘못 입력하셨습니다.");
	}  // choice 값이 1~3 이외의 값일 경우 출력
}