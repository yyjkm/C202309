#include <stdio.h>

int main() {
	int floor;
	printf("�� ������ �������? (5~100)\n");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {  //�� floor ���� ���
		for (int j = 0; j < floor - 1 - i; j++) {  // floor�� -1-i��ŭ ��ĭ ���
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {  // i*2+1��ŭ *�� ��ĭ �ڿ� ���
			printf("*");
		}
		printf("\n");
	}
	return 0;
}