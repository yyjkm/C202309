#include <stdio.h>

int main() {
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100) \n");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {
		for (int j = 0; j < floor - i; j++) {
			printf("S");
		}
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}