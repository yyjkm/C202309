#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 10 x 100 크기의 2차원 배열
	int taskCount = 0; // 할 일의 수를 나타내기 위한 변수

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// 사용자로부터 메뉴 입력받기 + 할 일의 수 출력하기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 종료를 위한 변수
		int delIndex = -1;  // 할 일 삭제를 위한 index 저장 변수
		int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수

		// 1~4까지 입력에 따른 기능 수행
		switch (choice) {
		case 1:  // 1. 할 일 추가
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));  // 사용자로부터 할 일을 입력받기
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			taskCount++;  // 할 일의 수 1 증가
			break;
		case 2:  // 2. 할 일 삭제
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);  // 사용자로부터 삭제할 할 일의 번호 입력받기
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}  // 삭제 할 번호가 저장되어있는 할 일의 수보다 많거나 0,음수 일 경우 오류 메세지 출력
			else {
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");  // 삭제 한 할 일에 ""문자열 복사
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);  // 삭제 후 뒤에 있는 할 일 앞으로 옮기기
				}
				taskCount -= 1;  // 할 일의 수 1 감소
			}
			break;
		case 3:  // 3. 할 일 목록
			printf("할 일 목록\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}  // 인덱스 0번 부터 taskCount 까지 할 일 출력
			printf("\n");
			break;
		case 4:  // 4. 프로그램 종료
			terminate = 1;
			break;
		case 5:  // 5. 할 일 수정
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작): ");
			scanf_s("%d", &changeIndex);  // 사용자로부터 수정 할 할 일의 번호 입력받기
			if (changeIndex > taskCount || changeIndex <= 0) {
				printf("수정 범위가 벗어났습니다.\n");
			}  // 삭제 할 번호가 저장되어있는 할 일의 수보다 많거나 0, 음수 일 경우 오류 메세지 출력
			else {
				printf("%d. %s : 할 일을 수정합니다.\n", changeIndex, tasks[changeIndex - 1]);
				printf("수정할 할 일의 내용을 입력해주세요.\n");
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex-1]));  // 사용자로부터 수정할 할 일의 내용 입려받아 내용 수정하기
				printf("%d. %s : 새롭게 수정되었습니다. \n", changeIndex, tasks[changeIndex - 1]);
			}
			break;
		default:  // 1~ 4 까지 메뉴 번호를 입력하지 않았을 경우
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
		if (taskCount == 10) {
			printf("할 일이 10개로 다 찼으므로 프로그램을 종료합니다.\n");
			break;  // 할 일이 10개로 다 차면 프로그램 종료
		}
		
	}
}